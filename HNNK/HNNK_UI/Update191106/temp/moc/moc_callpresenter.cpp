/****************************************************************************
** Meta object code from reading C++ file 'callpresenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/callpresenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callpresenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CallPresenter_t {
    QByteArrayData data[19];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CallPresenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CallPresenter_t qt_meta_stringdata_CallPresenter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CallPresenter"
QT_MOC_LITERAL(1, 14, 16), // "signalCallSystem"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "SLOT_REQUEST"
QT_MOC_LITERAL(4, 45, 16), // "signalMainToCall"
QT_MOC_LITERAL(5, 62, 12), // "MAIN_TO_CALL"
QT_MOC_LITERAL(6, 75, 14), // "slotMainToCall"
QT_MOC_LITERAL(7, 90, 21), // "slot_callsystem_state"
QT_MOC_LITERAL(8, 112, 10), // "CALL_STATE"
QT_MOC_LITERAL(9, 123, 13), // "slotCallEvent"
QT_MOC_LITERAL(10, 137, 11), // "SIGNAL_CALL"
QT_MOC_LITERAL(11, 149, 16), // "slot_set_UI_page"
QT_MOC_LITERAL(12, 166, 5), // "index"
QT_MOC_LITERAL(13, 172, 15), // "slotClose_Login"
QT_MOC_LITERAL(14, 188, 18), // "slotBedStateChange"
QT_MOC_LITERAL(15, 207, 5), // "state"
QT_MOC_LITERAL(16, 213, 21), // "slotBedAnimateTimeout"
QT_MOC_LITERAL(17, 235, 12), // "slotTVButton"
QT_MOC_LITERAL(18, 248, 13) // "slotUpdateTip"

    },
    "CallPresenter\0signalCallSystem\0\0"
    "SLOT_REQUEST\0signalMainToCall\0"
    "MAIN_TO_CALL\0slotMainToCall\0"
    "slot_callsystem_state\0CALL_STATE\0"
    "slotCallEvent\0SIGNAL_CALL\0slot_set_UI_page\0"
    "index\0slotClose_Login\0slotBedStateChange\0"
    "state\0slotBedAnimateTimeout\0slotTVButton\0"
    "slotUpdateTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CallPresenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x0a /* Public */,
      13,    0,   87,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x0a /* Public */,
      17,    0,   92,    2, 0x0a /* Public */,
      18,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CallPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CallPresenter *_t = static_cast<CallPresenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalCallSystem((*reinterpret_cast< SLOT_REQUEST(*)>(_a[1]))); break;
        case 1: _t->signalMainToCall((*reinterpret_cast< MAIN_TO_CALL(*)>(_a[1]))); break;
        case 2: _t->slotMainToCall((*reinterpret_cast< MAIN_TO_CALL(*)>(_a[1]))); break;
        case 3: _t->slot_callsystem_state((*reinterpret_cast< CALL_STATE(*)>(_a[1]))); break;
        case 4: _t->slotCallEvent((*reinterpret_cast< SIGNAL_CALL(*)>(_a[1]))); break;
        case 5: _t->slot_set_UI_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotClose_Login(); break;
        case 7: _t->slotBedStateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotBedAnimateTimeout(); break;
        case 9: _t->slotTVButton(); break;
        case 10: _t->slotUpdateTip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CallPresenter::*_t)(SLOT_REQUEST );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallPresenter::signalCallSystem)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CallPresenter::*_t)(MAIN_TO_CALL );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CallPresenter::signalMainToCall)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CallPresenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CallPresenter.data,
      qt_meta_data_CallPresenter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CallPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CallPresenter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CallPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CallPresenter::signalCallSystem(SLOT_REQUEST _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CallPresenter::signalMainToCall(MAIN_TO_CALL _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
