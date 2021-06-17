/****************************************************************************
** Meta object code from reading C++ file 'jrpcclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../jsonrpc-qt/jrpcclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jrpcclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonRPC__JRPCClient_t {
    QByteArrayData data[16];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRPC__JRPCClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRPC__JRPCClient_t qt_meta_stringdata_JsonRPC__JRPCClient = {
    {
QT_MOC_LITERAL(0, 0, 19), // "JsonRPC::JRPCClient"
QT_MOC_LITERAL(1, 20, 11), // "resultReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "Value&"
QT_MOC_LITERAL(4, 40, 6), // "result"
QT_MOC_LITERAL(5, 47, 2), // "id"
QT_MOC_LITERAL(6, 50, 11), // "resultError"
QT_MOC_LITERAL(7, 62, 4), // "code"
QT_MOC_LITERAL(8, 67, 7), // "message"
QT_MOC_LITERAL(9, 75, 4), // "data"
QT_MOC_LITERAL(10, 80, 5), // "error"
QT_MOC_LITERAL(11, 86, 4), // "sent"
QT_MOC_LITERAL(12, 91, 5), // "bytes"
QT_MOC_LITERAL(13, 97, 15), // "onResponseReady"
QT_MOC_LITERAL(14, 113, 7), // "onError"
QT_MOC_LITERAL(15, 121, 6) // "onSent"

    },
    "JsonRPC::JRPCClient\0resultReady\0\0"
    "Value&\0result\0id\0resultError\0code\0"
    "message\0data\0error\0sent\0bytes\0"
    "onResponseReady\0onError\0onSent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRPC__JRPCClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    4,   54,    2, 0x06 /* Public */,
      10,    2,   63,    2, 0x06 /* Public */,
      11,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   71,    2, 0x0a /* Public */,
      14,    2,   74,    2, 0x0a /* Public */,
      15,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 3, QMetaType::Int,    7,    8,    9,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Long,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Long,   12,

       0        // eod
};

void JsonRPC::JRPCClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JRPCClient *_t = static_cast<JRPCClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< Value(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->resultError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< Value(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 4: _t->onResponseReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->onError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->onSent((*reinterpret_cast< long(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (JRPCClient::*_t)(Value & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JRPCClient::resultReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JRPCClient::*_t)(int , QString , Value & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JRPCClient::resultError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JRPCClient::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JRPCClient::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (JRPCClient::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JRPCClient::sent)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject JsonRPC::JRPCClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsonRPC__JRPCClient.data,
      qt_meta_data_JsonRPC__JRPCClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JsonRPC::JRPCClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRPC::JRPCClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRPC__JRPCClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonRPC::JRPCClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void JsonRPC::JRPCClient::resultReady(Value & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonRPC::JRPCClient::resultError(int _t1, QString _t2, Value & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonRPC::JRPCClient::error(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JsonRPC::JRPCClient::sent(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
