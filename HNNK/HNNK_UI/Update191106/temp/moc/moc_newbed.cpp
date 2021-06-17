/****************************************************************************
** Meta object code from reading C++ file 'newbed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/newbed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newbed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewBedButton_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewBedButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewBedButton_t qt_meta_stringdata_NewBedButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "NewBedButton"
QT_MOC_LITERAL(1, 13, 10), // "newClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6) // "keyNum"

    },
    "NewBedButton\0newClicked\0\0keyNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewBedButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void NewBedButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewBedButton *_t = static_cast<NewBedButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewBedButton::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewBedButton::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NewBedButton::staticMetaObject = {
    { &SelectableButton::staticMetaObject, qt_meta_stringdata_NewBedButton.data,
      qt_meta_data_NewBedButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewBedButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewBedButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewBedButton.stringdata0))
        return static_cast<void*>(this);
    return SelectableButton::qt_metacast(_clname);
}

int NewBedButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectableButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void NewBedButton::newClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_NewBed_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewBed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewBed_t qt_meta_stringdata_NewBed = {
    {
QT_MOC_LITERAL(0, 0, 6), // "NewBed"
QT_MOC_LITERAL(1, 7, 18), // "signal_resetCursor"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "signalBedStateChange"
QT_MOC_LITERAL(4, 48, 5), // "state"
QT_MOC_LITERAL(5, 54, 12), // "onReturnHome"
QT_MOC_LITERAL(6, 67, 20) // "timeDelayToHighLight"

    },
    "NewBed\0signal_resetCursor\0\0"
    "signalBedStateChange\0state\0onReturnHome\0"
    "timeDelayToHighLight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewBed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewBed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewBed *_t = static_cast<NewBed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_resetCursor(); break;
        case 1: _t->signalBedStateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onReturnHome(); break;
        case 3: _t->timeDelayToHighLight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewBed::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewBed::signal_resetCursor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NewBed::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewBed::signalBedStateChange)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject NewBed::staticMetaObject = {
    { &BaseWidget::staticMetaObject, qt_meta_stringdata_NewBed.data,
      qt_meta_data_NewBed,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NewBed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewBed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewBed.stringdata0))
        return static_cast<void*>(this);
    return BaseWidget::qt_metacast(_clname);
}

int NewBed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void NewBed::signal_resetCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NewBed::signalBedStateChange(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
