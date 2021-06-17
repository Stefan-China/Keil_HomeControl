//  Copyright © 2011  Vinícius dos Santos Oliveira

#include "error.h"

using namespace JsonRPC;

Error::Error(ErrorCode code) :
    code(code)
{
    switch (code) {
    case PARSE_ERROR:
        desc = "Invalid JSON was received by the server.";
        break;
    case INVALID_REQUEST:
        desc = "The JSON sent is not a valid Request object.";
        break;
    case METHOD_NOT_FOUND:
        desc = "The method does not exist / is not available.";
        break;
    case INVALID_PARAMS:
        desc = "Invalid method parameter(s).";
        break;
    case INTERNAL_ERROR:
    default:
        this->code = NO_ERROR;
    case NO_ERROR:
        break;
    }
}

JsonRPC::Error::Error(ErrorCode code, QString desc) :
    code(code),
    desc(desc)
{
}

JsonRPC::Error::operator QByteArray() const
{
    Document doc;
    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);

    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();
    doc.PushBack(static_cast<Value>(*this), allocator);
    doc.Accept(writer);
    return QString::fromUtf8(buffer.GetString()).toUtf8();
}

JsonRPC::Error::operator Value() const
{
    Document doc;
    Value obj(kObjectType);
    Value objError(kObjectType);
    Value str_value(rapidjson::kStringType);

    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();
    obj.AddMember("jsonrpc", "2.0", allocator);
    {
        objError.AddMember("code", code, allocator);
        str_value.SetString(desc.toUtf8(), desc.length());
        objError.AddMember("message", str_value, allocator);
    }
    obj.AddMember("error", objError, allocator);

    return obj;
}
