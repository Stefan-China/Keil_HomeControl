/****************************************************************************
** Meta object code from reading C++ file 'homeform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/homeform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlankLabel_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlankLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlankLabel_t qt_meta_stringdata_BlankLabel = {
    {
QT_MOC_LITERAL(0, 0, 10) // "BlankLabel"

    },
    "BlankLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlankLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BlankLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BlankLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_BlankLabel.data,
      qt_meta_data_BlankLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BlankLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlankLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlankLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int BlankLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_HomeForm_t {
    QByteArrayData data[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomeForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomeForm_t qt_meta_stringdata_HomeForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HomeForm"
QT_MOC_LITERAL(1, 9, 10), // "newClicked"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 10), // "DeviceType"
QT_MOC_LITERAL(4, 32, 4), // "type"
QT_MOC_LITERAL(5, 37, 8), // "deviceid"
QT_MOC_LITERAL(6, 46, 12), // "beginClicked"
QT_MOC_LITERAL(7, 59, 14), // "homeSelectDone"
QT_MOC_LITERAL(8, 74, 13), // "SelectionMode"
QT_MOC_LITERAL(9, 88, 4), // "mode"
QT_MOC_LITERAL(10, 93, 8), // "buttonid"
QT_MOC_LITERAL(11, 102, 10), // "buttontype"
QT_MOC_LITERAL(12, 113, 12), // "renameDevice"
QT_MOC_LITERAL(13, 126, 11), // "ChineseName"
QT_MOC_LITERAL(14, 138, 14), // "onBeginClicked"
QT_MOC_LITERAL(15, 153, 15) // "onPasswdCorrect"

    },
    "HomeForm\0newClicked\0\0DeviceType\0type\0"
    "deviceid\0beginClicked\0homeSelectDone\0"
    "SelectionMode\0mode\0buttonid\0buttontype\0"
    "renameDevice\0ChineseName\0onBeginClicked\0"
    "onPasswdCorrect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomeForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    0,   49,    2, 0x06 /* Public */,
       7,    3,   50,    2, 0x06 /* Public */,
      12,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   62,    2, 0x08 /* Private */,
      15,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::QString,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HomeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomeForm *_t = static_cast<HomeForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< DeviceType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->beginClicked(); break;
        case 2: _t->homeSelectDone((*reinterpret_cast< SelectionMode(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->renameDevice((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->onBeginClicked(); break;
        case 5: _t->onPasswdCorrect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HomeForm::*_t)(DeviceType , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomeForm::newClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HomeForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomeForm::beginClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HomeForm::*_t)(SelectionMode , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomeForm::homeSelectDone)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HomeForm::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HomeForm::renameDevice)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject HomeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HomeForm.data,
      qt_meta_data_HomeForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HomeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HomeForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int HomeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HomeForm::newClicked(DeviceType _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HomeForm::beginClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HomeForm::homeSelectDone(SelectionMode _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HomeForm::renameDevice(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
