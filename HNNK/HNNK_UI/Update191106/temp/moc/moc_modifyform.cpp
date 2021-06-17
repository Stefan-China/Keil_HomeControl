/****************************************************************************
** Meta object code from reading C++ file 'modifyform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/modifyform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifyform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModifyButton_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyButton_t qt_meta_stringdata_ModifyButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModifyButton"
QT_MOC_LITERAL(1, 13, 10), // "newClicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "buttonid"
QT_MOC_LITERAL(4, 34, 11), // "ChineseName"
QT_MOC_LITERAL(5, 46, 11) // "NameChanged"

    },
    "ModifyButton\0newClicked\0\0buttonid\0"
    "ChineseName\0NameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

       0        // eod
};

void ModifyButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyButton *_t = static_cast<ModifyButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->NameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModifyButton::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyButton::newClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModifyButton::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyButton::NameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ModifyButton::staticMetaObject = {
    { &FlashButton::staticMetaObject, qt_meta_stringdata_ModifyButton.data,
      qt_meta_data_ModifyButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModifyButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyButton.stringdata0))
        return static_cast<void*>(this);
    return FlashButton::qt_metacast(_clname);
}

int ModifyButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FlashButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ModifyButton::newClicked(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModifyButton::NameChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ModifyForm_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModifyForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModifyForm_t qt_meta_stringdata_ModifyForm = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ModifyForm"
QT_MOC_LITERAL(1, 11, 11), // "nameChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(4, 42, 17), // "deviceNameChanged"
QT_MOC_LITERAL(5, 60, 8), // "buttonid"
QT_MOC_LITERAL(6, 69, 4), // "name"
QT_MOC_LITERAL(7, 74, 10), // "modifyDone"
QT_MOC_LITERAL(8, 85, 10), // "on_clicked"
QT_MOC_LITERAL(9, 96, 11) // "on_focusout"

    },
    "ModifyForm\0nameChanged\0\0QMap<int,QString>\0"
    "deviceNameChanged\0buttonid\0name\0"
    "modifyDone\0on_clicked\0on_focusout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModifyForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       7,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModifyForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModifyForm *_t = static_cast<ModifyForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QMap<int,QString>(*)>(_a[1]))); break;
        case 1: _t->deviceNameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->modifyDone(); break;
        case 3: _t->on_clicked(); break;
        case 4: _t->on_focusout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModifyForm::*_t)(QMap<int,QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyForm::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModifyForm::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyForm::deviceNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModifyForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifyForm::modifyDone)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ModifyForm::staticMetaObject = {
    { &SelectionForm::staticMetaObject, qt_meta_stringdata_ModifyForm.data,
      qt_meta_data_ModifyForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModifyForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModifyForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModifyForm.stringdata0))
        return static_cast<void*>(this);
    return SelectionForm::qt_metacast(_clname);
}

int ModifyForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectionForm::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ModifyForm::nameChanged(QMap<int,QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModifyForm::deviceNameChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModifyForm::modifyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
