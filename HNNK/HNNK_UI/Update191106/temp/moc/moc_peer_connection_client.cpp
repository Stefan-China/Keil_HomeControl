/****************************************************************************
** Meta object code from reading C++ file 'peer_connection_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_7_call/webrtcqt/peer_connection_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peer_connection_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PeerConnectionClient_t {
    QByteArrayData data[10];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeerConnectionClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeerConnectionClient_t qt_meta_stringdata_PeerConnectionClient = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PeerConnectionClient"
QT_MOC_LITERAL(1, 21, 13), // "ConnectServer"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "server"
QT_MOC_LITERAL(4, 43, 4), // "port"
QT_MOC_LITERAL(5, 48, 14), // "onDisconnected"
QT_MOC_LITERAL(6, 63, 11), // "onConnected"
QT_MOC_LITERAL(7, 75, 14), // "onTextReceived"
QT_MOC_LITERAL(8, 90, 3), // "msg"
QT_MOC_LITERAL(9, 94, 5) // "Close"

    },
    "PeerConnectionClient\0ConnectServer\0\0"
    "server\0port\0onDisconnected\0onConnected\0"
    "onTextReceived\0msg\0Close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeerConnectionClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,

       0        // eod
};

void PeerConnectionClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PeerConnectionClient *_t = static_cast<PeerConnectionClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ConnectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onDisconnected(); break;
        case 2: _t->onConnected(); break;
        case 3: _t->onTextReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->Close(); break;
        default: ;
        }
    }
}

const QMetaObject PeerConnectionClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PeerConnectionClient.data,
      qt_meta_data_PeerConnectionClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PeerConnectionClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeerConnectionClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PeerConnectionClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "sigslot::has_slots<>"))
        return static_cast< sigslot::has_slots<>*>(this);
    if (!strcmp(_clname, "rtc::MessageHandler"))
        return static_cast< rtc::MessageHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int PeerConnectionClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
