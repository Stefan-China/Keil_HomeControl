//  Copyright 2011 Luis Gustavo S. Barreto

#ifndef JSONRPC_ERROR_H
#define JSONRPC_ERROR_H

#include <QString>
#include <QByteArray>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

using namespace rapidjson;

namespace JsonRPC {

enum ErrorCode
{
    NO_ERROR,
    PARSE_ERROR      = -32700,
    INVALID_REQUEST  = -32600,
    METHOD_NOT_FOUND = -32601,
    INVALID_PARAMS   = -32602,
    INTERNAL_ERROR   = -32603
};

class Error
{
    /*!
      @brief Constructs a Error object with \param code error code and
      \param desc error message.
      */
    Error(ErrorCode code, QString desc);
    /*! Constructs a Error object with \param code error code.
      It'll try to set the error message automatically for standard
      error codes. If you pass a non-standard error code,
      ErrorCode::NO_ERROR will be used.
      */
    Error(ErrorCode code = NO_ERROR);
    Error(const Error &);

    /*! Generates the JSON object.
      */
    operator QByteArray() const;
    /*! Generates the QVariantMap object.
      The generated QVariantMap can be parsed into a JSON Object.
      */
    operator Value() const;

    /*! Error code.
      */
    ErrorCode code;
    /*! Error message.
      */
    QString desc;
};

} // namespace JsonRPC

#endif // JSONRPC_ERROR_H
