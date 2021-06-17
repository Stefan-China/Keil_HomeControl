/****************************************************************************
** Meta object code from reading C++ file 'settingform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/settingform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingForm_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingForm_t qt_meta_stringdata_SettingForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SettingForm"
QT_MOC_LITERAL(1, 12, 15), // "deleteConfirmed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "renameDevice"
QT_MOC_LITERAL(4, 42, 4), // "name"
QT_MOC_LITERAL(5, 47, 22), // "on_buttonClose_clicked"
QT_MOC_LITERAL(6, 70, 24), // "on_buttonConfirm_clicked"
QT_MOC_LITERAL(7, 95, 23), // "on_buttonRename_clicked"
QT_MOC_LITERAL(8, 119, 23) // "on_buttonDelete_clicked"

    },
    "SettingForm\0deleteConfirmed\0\0renameDevice\0"
    "name\0on_buttonClose_clicked\0"
    "on_buttonConfirm_clicked\0"
    "on_buttonRename_clicked\0on_buttonDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingForm *_t = static_cast<SettingForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteConfirmed(); break;
        case 1: _t->renameDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_buttonClose_clicked(); break;
        case 3: _t->on_buttonConfirm_clicked(); break;
        case 4: _t->on_buttonRename_clicked(); break;
        case 5: _t->on_buttonDelete_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingForm::deleteConfirmed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingForm::renameDevice)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SettingForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingForm.data,
      qt_meta_data_SettingForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SettingForm::deleteConfirmed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingForm::renameDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
