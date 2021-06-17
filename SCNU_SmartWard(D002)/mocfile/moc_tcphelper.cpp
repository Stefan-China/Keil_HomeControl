/****************************************************************************
** Meta object code from reading C++ file 'tcphelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../jsonrpc-qt/tcphelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcphelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonRPC__TcpHelper_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRPC__TcpHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRPC__TcpHelper_t qt_meta_stringdata_JsonRPC__TcpHelper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "JsonRPC::TcpHelper"
QT_MOC_LITERAL(1, 19, 9), // "connected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "disconnected"
QT_MOC_LITERAL(4, 43, 11), // "onConnected"
QT_MOC_LITERAL(5, 55, 14), // "onDisconnected"
QT_MOC_LITERAL(6, 70, 10), // "onReceived"
QT_MOC_LITERAL(7, 81, 6), // "onSent"
QT_MOC_LITERAL(8, 88, 5), // "bytes"
QT_MOC_LITERAL(9, 94, 7), // "onError"
QT_MOC_LITERAL(10, 102, 28) // "QAbstractSocket::SocketError"

    },
    "JsonRPC::TcpHelper\0connected\0\0"
    "disconnected\0onConnected\0onDisconnected\0"
    "onReceived\0onSent\0bytes\0onError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRPC__TcpHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void JsonRPC::TcpHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TcpHelper *_t = static_cast<TcpHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->onConnected(); break;
        case 3: _t->onDisconnected(); break;
        case 4: _t->onReceived(); break;
        case 5: _t->onSent((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TcpHelper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpHelper::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TcpHelper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpHelper::disconnected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject JsonRPC::TcpHelper::staticMetaObject = {
    { &TransportHandler::staticMetaObject, qt_meta_stringdata_JsonRPC__TcpHelper.data,
      qt_meta_data_JsonRPC__TcpHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JsonRPC::TcpHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRPC::TcpHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRPC__TcpHelper.stringdata0))
        return static_cast<void*>(this);
    return TransportHandler::qt_metacast(_clname);
}

int JsonRPC::TcpHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransportHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void JsonRPC::TcpHelper::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void JsonRPC::TcpHelper::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
