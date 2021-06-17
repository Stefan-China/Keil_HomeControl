/****************************************************************************
** Meta object code from reading C++ file 'transporthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../jsonrpc-qt/transporthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transporthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JsonRPC__TransportHandler_t {
    QByteArrayData data[9];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JsonRPC__TransportHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JsonRPC__TransportHandler_t qt_meta_stringdata_JsonRPC__TransportHandler = {
    {
QT_MOC_LITERAL(0, 0, 25), // "JsonRPC::TransportHandler"
QT_MOC_LITERAL(1, 26, 8), // "received"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "data"
QT_MOC_LITERAL(4, 41, 5), // "error"
QT_MOC_LITERAL(5, 47, 4), // "code"
QT_MOC_LITERAL(6, 52, 7), // "message"
QT_MOC_LITERAL(7, 60, 4), // "sent"
QT_MOC_LITERAL(8, 65, 5) // "bytes"

    },
    "JsonRPC::TransportHandler\0received\0\0"
    "data\0error\0code\0message\0sent\0bytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JsonRPC__TransportHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Long,    8,

       0        // eod
};

void JsonRPC::TransportHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransportHandler *_t = static_cast<TransportHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->received((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->sent((*reinterpret_cast< long(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransportHandler::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransportHandler::received)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TransportHandler::*_t)(int , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransportHandler::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TransportHandler::*_t)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransportHandler::sent)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject JsonRPC::TransportHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JsonRPC__TransportHandler.data,
      qt_meta_data_JsonRPC__TransportHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JsonRPC::TransportHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JsonRPC::TransportHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JsonRPC__TransportHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JsonRPC::TransportHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void JsonRPC::TransportHandler::received(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JsonRPC::TransportHandler::error(int _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JsonRPC::TransportHandler::sent(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
