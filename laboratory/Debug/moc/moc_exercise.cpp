/****************************************************************************
** Meta object code from reading C++ file 'exercise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../exercise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exercise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_exercise_t {
    QByteArrayData data[13];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exercise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exercise_t qt_meta_stringdata_exercise = {
    {
QT_MOC_LITERAL(0, 0, 8), // "exercise"
QT_MOC_LITERAL(1, 9, 7), // "go_ex_2"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "go_ex_3"
QT_MOC_LITERAL(4, 26, 6), // "finish"
QT_MOC_LITERAL(5, 33, 14), // "click_go_graph"
QT_MOC_LITERAL(6, 48, 5), // "start"
QT_MOC_LITERAL(7, 54, 13), // "click_go_ex_2"
QT_MOC_LITERAL(8, 68, 13), // "click_go_ex_3"
QT_MOC_LITERAL(9, 82, 15), // "click_go_finish"
QT_MOC_LITERAL(10, 98, 10), // "get_result"
QT_MOC_LITERAL(11, 109, 15), // "onAnchorClicked"
QT_MOC_LITERAL(12, 125, 18) // "std::vector<float>"

    },
    "exercise\0go_ex_2\0\0go_ex_3\0finish\0"
    "click_go_graph\0start\0click_go_ex_2\0"
    "click_go_ex_3\0click_go_finish\0get_result\0"
    "onAnchorClicked\0std::vector<float>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exercise[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    2,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,

       0        // eod
};

void exercise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        exercise *_t = static_cast<exercise *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->go_ex_2(); break;
        case 1: _t->go_ex_3(); break;
        case 2: _t->finish(); break;
        case 3: _t->click_go_graph(); break;
        case 4: _t->start(); break;
        case 5: _t->click_go_ex_2(); break;
        case 6: _t->click_go_ex_3(); break;
        case 7: _t->click_go_finish(); break;
        case 8: { QString _r = _t->get_result();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->onAnchorClicked((*reinterpret_cast< std::vector<float>(*)>(_a[1])),(*reinterpret_cast< std::vector<float>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (exercise::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&exercise::go_ex_2)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (exercise::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&exercise::go_ex_3)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (exercise::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&exercise::finish)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject exercise::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_exercise.data,
      qt_meta_data_exercise,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *exercise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exercise::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_exercise.stringdata0))
        return static_cast<void*>(const_cast< exercise*>(this));
    return QWidget::qt_metacast(_clname);
}

int exercise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void exercise::go_ex_2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void exercise::go_ex_3()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void exercise::finish()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
