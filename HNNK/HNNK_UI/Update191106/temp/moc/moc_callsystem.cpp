/****************************************************************************
** Meta object code from reading C++ file 'callsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_7_call/callsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallSystem_t {
    QByteArrayData data[20];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallSystem_t qt_meta_stringdata_CallSystem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CallSystem"
QT_MOC_LITERAL(1, 11, 13), // "sigDecodeData"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 38, 10), // "byte_array"
QT_MOC_LITERAL(5, 49, 15), // "signalCallState"
QT_MOC_LITERAL(6, 65, 10), // "CALL_STATE"
QT_MOC_LITERAL(7, 76, 15), // "signalCallEvent"
QT_MOC_LITERAL(8, 92, 11), // "SIGNAL_CALL"
QT_MOC_LITERAL(9, 104, 19), // "signalConnectServer"
QT_MOC_LITERAL(10, 124, 2), // "ip"
QT_MOC_LITERAL(11, 127, 4), // "port"
QT_MOC_LITERAL(12, 132, 11), // "CloseServer"
QT_MOC_LITERAL(13, 144, 21), // "slotEncodeAudioTxData"
QT_MOC_LITERAL(14, 166, 13), // "slotUdpRxData"
QT_MOC_LITERAL(15, 180, 8), // "slotCall"
QT_MOC_LITERAL(16, 189, 12), // "SLOT_REQUEST"
QT_MOC_LITERAL(17, 202, 10), // "timeUpdate"
QT_MOC_LITERAL(18, 213, 20), // "timerBroadcastUpdate"
QT_MOC_LITERAL(19, 234, 26) // "timerBroadcastUpdateServer"

    },
    "CallSystem\0sigDecodeData\0\0QByteArray&\0"
    "byte_array\0signalCallState\0CALL_STATE\0"
    "signalCallEvent\0SIGNAL_CALL\0"
    "signalConnectServer\0ip\0port\0CloseServer\0"
    "slotEncodeAudioTxData\0slotUdpRxData\0"
    "slotCall\0SLOT_REQUEST\0timeUpdate\0"
    "timerBroadcastUpdate\0timerBroadcastUpdateServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       9,    2,   78,    2, 0x06 /* Public */,
      12,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x0a /* Public */,
      17,    0,   93,    2, 0x08 /* Private */,
      18,    0,   94,    2, 0x08 /* Private */,
      19,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CallSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallSystem *_t = static_cast<CallSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigDecodeData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->signalCallState((*reinterpret_cast< CALL_STATE(*)>(_a[1]))); break;
        case 2: _t->signalCallEvent((*reinterpret_cast< SIGNAL_CALL(*)>(_a[1]))); break;
        case 3: _t->signalConnectServer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->CloseServer(); break;
        case 5: _t->slotEncodeAudioTxData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->slotUdpRxData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->slotCall((*reinterpret_cast< SLOT_REQUEST(*)>(_a[1]))); break;
        case 8: _t->timeUpdate(); break;
        case 9: _t->timerBroadcastUpdate(); break;
        case 10: _t->timerBroadcastUpdateServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CallSystem::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallSystem::sigDecodeData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CallSystem::*_t)(CALL_STATE );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallSystem::signalCallState)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CallSystem::*_t)(SIGNAL_CALL );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallSystem::signalCallEvent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CallSystem::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallSystem::signalConnectServer)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CallSystem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallSystem::CloseServer)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CallSystem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CallSystem.data,
      qt_meta_data_CallSystem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CallSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CallSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CallSystem::sigDecodeData(QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallSystem::signalCallState(CALL_STATE _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CallSystem::signalCallEvent(SIGNAL_CALL _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CallSystem::signalConnectServer(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CallSystem::CloseServer()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
