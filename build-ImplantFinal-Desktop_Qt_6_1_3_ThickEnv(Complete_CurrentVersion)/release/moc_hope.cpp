/****************************************************************************
** Meta object code from reading C++ file 'hope.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ImplantPost-Final_dimensionlessing1/hope.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_hope_t {
    const uint offsetsAndSize[38];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_hope_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_hope_t qt_meta_stringdata_hope = {
    {
QT_MOC_LITERAL(0, 4), // "hope"
QT_MOC_LITERAL(5, 10), // "toBegining"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 11), // "finalWindow"
QT_MOC_LITERAL(29, 14), // "lenlowerthen32"
QT_MOC_LITERAL(44, 1), // "M"
QT_MOC_LITERAL(46, 4), // "Xrup"
QT_MOC_LITERAL(51, 2), // "x1"
QT_MOC_LITERAL(54, 2), // "x2"
QT_MOC_LITERAL(57, 3), // "T01"
QT_MOC_LITERAL(61, 3), // "T02"
QT_MOC_LITERAL(65, 12), // "mostcoldtime"
QT_MOC_LITERAL(78, 1), // "T"
QT_MOC_LITERAL(80, 1), // "h"
QT_MOC_LITERAL(82, 15), // "on_quit_clicked"
QT_MOC_LITERAL(98, 23), // "on_returntomain_clicked"
QT_MOC_LITERAL(122, 31), // "on_radioButtonColdGraph_toggled"
QT_MOC_LITERAL(154, 7), // "checked"
QT_MOC_LITERAL(162, 32) // "on_radioButtonFinalGraph_toggled"

    },
    "hope\0toBegining\0\0finalWindow\0"
    "lenlowerthen32\0M\0Xrup\0x1\0x2\0T01\0T02\0"
    "mostcoldtime\0T\0h\0on_quit_clicked\0"
    "on_returntomain_clicked\0"
    "on_radioButtonColdGraph_toggled\0checked\0"
    "on_radioButtonFinalGraph_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hope[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,   10,   51,    2, 0x08,    1 /* Private */,
      14,    0,   72,    2, 0x08,   12 /* Private */,
      15,    0,   73,    2, 0x08,   13 /* Private */,
      16,    1,   74,    2, 0x08,   14 /* Private */,
      18,    1,   77,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void hope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hope *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toBegining(); break;
        case 1: _t->finalWindow((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 2: _t->on_quit_clicked(); break;
        case 3: _t->on_returntomain_clicked(); break;
        case 4: _t->on_radioButtonColdGraph_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioButtonFinalGraph_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hope::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&hope::toBegining)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject hope::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_hope.offsetsAndSize,
    qt_meta_data_hope,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_hope_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *hope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_hope.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int hope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void hope::toBegining()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
