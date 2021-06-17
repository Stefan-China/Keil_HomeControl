/****************************************************************************
** Meta object code from reading C++ file 'combobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginSystem/combobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComboBox_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComboBox_t qt_meta_stringdata_ComboBox = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ComboBox"
QT_MOC_LITERAL(1, 9, 27), // "signal_to_db_remove_account"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "GetFocus"
QT_MOC_LITERAL(4, 47, 9), // "LostFocus"
QT_MOC_LITERAL(5, 57, 7), // "clicked"
QT_MOC_LITERAL(6, 65, 15), // "SlotShowAccount"
QT_MOC_LITERAL(7, 81, 17) // "SlotRemoveAccount"

    },
    "ComboBox\0signal_to_db_remove_account\0"
    "\0GetFocus\0LostFocus\0clicked\0SlotShowAccount\0"
    "SlotRemoveAccount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComboBox[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,
       3,    0,   47,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void ComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComboBox *_t = static_cast<ComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_to_db_remove_account((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->GetFocus(); break;
        case 2: _t->LostFocus(); break;
        case 3: _t->clicked(); break;
        case 4: _t->SlotShowAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SlotRemoveAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ComboBox::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComboBox::signal_to_db_remove_account)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ComboBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComboBox::GetFocus)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ComboBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComboBox::LostFocus)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ComboBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComboBox::clicked)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_ComboBox.data,
      qt_meta_data_ComboBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int ComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void ComboBox::signal_to_db_remove_account(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComboBox::GetFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComboBox::LostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ComboBox::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
