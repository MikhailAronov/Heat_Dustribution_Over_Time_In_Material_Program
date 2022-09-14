/****************************************************************************
** Meta object code from reading C++ file 'bodyofcalculation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ImplantPost-Final_dimensionlessing1/bodyofcalculation.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bodyofcalculation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BodyOfCalculation_t {
    const uint offsetsAndSize[56];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BodyOfCalculation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BodyOfCalculation_t qt_meta_stringdata_BodyOfCalculation = {
    {
QT_MOC_LITERAL(0, 17), // "BodyOfCalculation"
QT_MOC_LITERAL(18, 10), // "ShowResult"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 14), // "lenlowerthen32"
QT_MOC_LITERAL(45, 1), // "M"
QT_MOC_LITERAL(47, 4), // "Xrup"
QT_MOC_LITERAL(52, 2), // "x1"
QT_MOC_LITERAL(55, 2), // "x2"
QT_MOC_LITERAL(58, 3), // "T01"
QT_MOC_LITERAL(62, 3), // "T02"
QT_MOC_LITERAL(66, 12), // "mostcoldtime"
QT_MOC_LITERAL(79, 1), // "T"
QT_MOC_LITERAL(81, 1), // "h"
QT_MOC_LITERAL(83, 15), // "HeatCalculation"
QT_MOC_LITERAL(99, 2), // "kM"
QT_MOC_LITERAL(102, 2), // "cM"
QT_MOC_LITERAL(105, 2), // "dM"
QT_MOC_LITERAL(108, 2), // "ki"
QT_MOC_LITERAL(111, 2), // "ci"
QT_MOC_LITERAL(114, 2), // "di"
QT_MOC_LITERAL(117, 2), // "kW"
QT_MOC_LITERAL(120, 2), // "cW"
QT_MOC_LITERAL(123, 2), // "dW"
QT_MOC_LITERAL(126, 3), // "T0W"
QT_MOC_LITERAL(130, 3), // "Env"
QT_MOC_LITERAL(134, 3), // "tau"
QT_MOC_LITERAL(138, 6), // "tmStep"
QT_MOC_LITERAL(145, 6) // "cdStep"

    },
    "BodyOfCalculation\0ShowResult\0\0"
    "lenlowerthen32\0M\0Xrup\0x1\0x2\0T01\0T02\0"
    "mostcoldtime\0T\0h\0HeatCalculation\0kM\0"
    "cM\0dM\0ki\0ci\0di\0kW\0cW\0dW\0T0W\0Env\0tau\0"
    "tmStep\0cdStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BodyOfCalculation[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,   10,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,   20,   47,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Double, QMetaType::Bool, QMetaType::Double, QMetaType::Bool,   14,   15,   16,    6,    8,   17,   18,   19,    7,    9,   11,   20,   21,   22,   23,   24,   25,   26,   12,   27,

       0        // eod
};

void BodyOfCalculation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BodyOfCalculation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowResult((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 1: _t->HeatCalculation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14])),(*reinterpret_cast< double(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< double(*)>(_a[17])),(*reinterpret_cast< bool(*)>(_a[18])),(*reinterpret_cast< double(*)>(_a[19])),(*reinterpret_cast< bool(*)>(_a[20]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BodyOfCalculation::*)(double , const int , double , double , double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BodyOfCalculation::ShowResult)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BodyOfCalculation::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BodyOfCalculation.offsetsAndSize,
    qt_meta_data_BodyOfCalculation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BodyOfCalculation_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *BodyOfCalculation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BodyOfCalculation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BodyOfCalculation.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BodyOfCalculation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BodyOfCalculation::ShowResult(double _t1, const int _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
