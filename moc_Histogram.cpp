/****************************************************************************
** Meta object code from reading C++ file 'Histogram.h'
**
** Created: Tue Apr 5 11:46:23 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Histogram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Histogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Histogram[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_Histogram[] = {
    "Histogram\0"
};

const QMetaObject Histogram::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Histogram,
      qt_meta_data_Histogram, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Histogram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Histogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Histogram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Histogram))
        return static_cast<void*>(const_cast< Histogram*>(this));
    return QWidget::qt_metacast(_clname);
}

int Histogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
