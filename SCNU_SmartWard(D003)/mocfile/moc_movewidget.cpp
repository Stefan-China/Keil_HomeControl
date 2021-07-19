/****************************************************************************
** Meta object code from reading C++ file 'movewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maincontent/controlwidget/movecontrol/movewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoveWidget_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveWidget_t qt_meta_stringdata_MoveWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MoveWidget"
QT_MOC_LITERAL(1, 11, 18), // "signal_send_button"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "short int"
QT_MOC_LITERAL(4, 41, 2), // "dd"
QT_MOC_LITERAL(5, 44, 18), // "signal_send_energy"
QT_MOC_LITERAL(6, 63, 2), // "dl"
QT_MOC_LITERAL(7, 66, 14), // "freshCloudData"
QT_MOC_LITERAL(8, 81, 10), // "onReceived"
QT_MOC_LITERAL(9, 92, 10), // "IOContext*"
QT_MOC_LITERAL(10, 103, 8), // "pContext"
QT_MOC_LITERAL(11, 112, 15) // "Onclicked_Mouse"

    },
    "MoveWidget\0signal_send_button\0\0short int\0"
    "dd\0signal_send_energy\0dl\0freshCloudData\0"
    "onReceived\0IOContext*\0pContext\0"
    "Onclicked_Mouse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x0a /* Public */,
       8,    1,   46,    2, 0x0a /* Public */,
      11,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void MoveWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MoveWidget *_t = static_cast<MoveWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_send_button((*reinterpret_cast< short int(*)>(_a[1]))); break;
        case 1: _t->signal_send_energy((*reinterpret_cast< short int(*)>(_a[1]))); break;
        case 2: _t->freshCloudData(); break;
        case 3: _t->onReceived((*reinterpret_cast< IOContext*(*)>(_a[1]))); break;
        case 4: _t->Onclicked_Mouse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< IOContext* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MoveWidget::*_t)(short int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveWidget::signal_send_button)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MoveWidget::*_t)(short int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveWidget::signal_send_energy)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MoveWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MoveWidget.data,
      qt_meta_data_MoveWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MoveWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MoveWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MoveWidget::signal_send_button(short int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MoveWidget::signal_send_energy(short int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
