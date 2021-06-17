/****************************************************************************
** Meta object code from reading C++ file 'mitelevision.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/mitelevision.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mitelevision.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MiTelevision_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MiTelevision_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MiTelevision_t qt_meta_stringdata_MiTelevision = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MiTelevision"
QT_MOC_LITERAL(1, 13, 14), // "signalTVButton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "onTvPublish"
QT_MOC_LITERAL(4, 41, 5), // "array"
QT_MOC_LITERAL(5, 47, 13), // "onTestClicked"
QT_MOC_LITERAL(6, 61, 14) // "onTestClicked2"

    },
    "MiTelevision\0signalTVButton\0\0onTvPublish\0"
    "array\0onTestClicked\0onTestClicked2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiTelevision[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MiTelevision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiTelevision *_t = static_cast<MiTelevision *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTVButton(); break;
        case 1: _t->onTvPublish((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->onTestClicked(); break;
        case 3: _t->onTestClicked2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MiTelevision::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiTelevision::signalTVButton)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MiTelevision::staticMetaObject = {
    { &BaseWidget::staticMetaObject, qt_meta_stringdata_MiTelevision.data,
      qt_meta_data_MiTelevision,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MiTelevision::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiTelevision::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiTelevision.stringdata0))
        return static_cast<void*>(this);
    return BaseWidget::qt_metacast(_clname);
}

int MiTelevision::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MiTelevision::signalTVButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
