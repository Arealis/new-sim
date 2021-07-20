/****************************************************************************
** Meta object code from reading C++ file 'createdocument.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/createdocument.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createdocument.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ResizableTable_t {
    const uint offsetsAndSize[2];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ResizableTable_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ResizableTable_t qt_meta_stringdata_ResizableTable = {
    {
QT_MOC_LITERAL(0, 14) // "ResizableTable"

    },
    "ResizableTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResizableTable[] = {

 // content:
       9,       // revision
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

void ResizableTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject ResizableTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_ResizableTable.offsetsAndSize,
    qt_meta_data_ResizableTable,
    qt_static_metacall,
    nullptr,
    nullptr,
    nullptr
} };


const QMetaObject *ResizableTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResizableTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResizableTable.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int ResizableTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CreateDocument_t {
    const uint offsetsAndSize[94];
    char stringdata0[576];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CreateDocument_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CreateDocument_t qt_meta_stringdata_CreateDocument = {
    {
QT_MOC_LITERAL(0, 14), // "CreateDocument"
QT_MOC_LITERAL(15, 11), // "fetchTotals"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 9), // "QSqlQuery"
QT_MOC_LITERAL(38, 3), // "qry"
QT_MOC_LITERAL(42, 23), // "fetchTotalsValuesForSql"
QT_MOC_LITERAL(66, 18), // "fetchRateAndAmount"
QT_MOC_LITERAL(85, 9), // "rateIndex"
QT_MOC_LITERAL(95, 10), // "QLineEdit*"
QT_MOC_LITERAL(106, 4), // "line"
QT_MOC_LITERAL(111, 12), // "QGridLayout*"
QT_MOC_LITERAL(124, 4), // "grid"
QT_MOC_LITERAL(129, 6), // "custom"
QT_MOC_LITERAL(136, 17), // "createTotalsLabel"
QT_MOC_LITERAL(154, 7), // "QLabel*"
QT_MOC_LITERAL(162, 12), // "nextSubtotal"
QT_MOC_LITERAL(175, 4), // "int*"
QT_MOC_LITERAL(180, 3), // "row"
QT_MOC_LITERAL(184, 5), // "title"
QT_MOC_LITERAL(190, 8), // "QWidget*"
QT_MOC_LITERAL(199, 6), // "parent"
QT_MOC_LITERAL(206, 20), // "createTotalsLineEdit"
QT_MOC_LITERAL(227, 7), // "expense"
QT_MOC_LITERAL(235, 16), // "createTotalsLine"
QT_MOC_LITERAL(252, 7), // "QFrame*"
QT_MOC_LITERAL(260, 18), // "setTotalsRowHidden"
QT_MOC_LITERAL(279, 6), // "widget"
QT_MOC_LITERAL(286, 6), // "hidden"
QT_MOC_LITERAL(293, 20), // "on_addCustom_clicked"
QT_MOC_LITERAL(314, 15), // "on_save_clicked"
QT_MOC_LITERAL(330, 17), // "on_cancel_clicked"
QT_MOC_LITERAL(348, 20), // "on_saveDraft_clicked"
QT_MOC_LITERAL(369, 19), // "storeCustomExpenses"
QT_MOC_LITERAL(389, 6), // "docnum"
QT_MOC_LITERAL(396, 10), // "storeTable"
QT_MOC_LITERAL(407, 9), // "oldDocNum"
QT_MOC_LITERAL(417, 9), // "newDocNum"
QT_MOC_LITERAL(427, 6), // "status"
QT_MOC_LITERAL(434, 18), // "storeCustomDetails"
QT_MOC_LITERAL(453, 28), // "insertRecurringCustomDetails"
QT_MOC_LITERAL(482, 18), // "fetchCustomDetails"
QT_MOC_LITERAL(501, 8), // "editable"
QT_MOC_LITERAL(510, 18), // "deleteCustomDetail"
QT_MOC_LITERAL(529, 12), // "fetchDetails"
QT_MOC_LITERAL(542, 9), // "TableFlag"
QT_MOC_LITERAL(552, 8), // "modifier"
QT_MOC_LITERAL(561, 14) // "DeleteDocument"

    },
    "CreateDocument\0fetchTotals\0\0QSqlQuery\0"
    "qry\0fetchTotalsValuesForSql\0"
    "fetchRateAndAmount\0rateIndex\0QLineEdit*\0"
    "line\0QGridLayout*\0grid\0custom\0"
    "createTotalsLabel\0QLabel*\0nextSubtotal\0"
    "int*\0row\0title\0QWidget*\0parent\0"
    "createTotalsLineEdit\0expense\0"
    "createTotalsLine\0QFrame*\0setTotalsRowHidden\0"
    "widget\0hidden\0on_addCustom_clicked\0"
    "on_save_clicked\0on_cancel_clicked\0"
    "on_saveDraft_clicked\0storeCustomExpenses\0"
    "docnum\0storeTable\0oldDocNum\0newDocNum\0"
    "status\0storeCustomDetails\0"
    "insertRecurringCustomDetails\0"
    "fetchCustomDetails\0editable\0"
    "deleteCustomDetail\0fetchDetails\0"
    "TableFlag\0modifier\0DeleteDocument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateDocument[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x08,    0 /* Private */,
       5,    0,  167,    2, 0x08,    2 /* Private */,
       6,    5,  168,    2, 0x08,    3 /* Private */,
       6,    4,  179,    2, 0x28,    9 /* Private | MethodCloned */,
      13,    5,  188,    2, 0x08,   14 /* Private */,
      21,    6,  199,    2, 0x08,   20 /* Private */,
      21,    5,  212,    2, 0x28,   27 /* Private | MethodCloned */,
      23,    3,  223,    2, 0x08,   33 /* Private */,
      25,    3,  230,    2, 0x08,   37 /* Private */,
      25,    3,  237,    2, 0x08,   41 /* Private */,
      25,    3,  244,    2, 0x08,   45 /* Private */,
      28,    0,  251,    2, 0x08,   49 /* Private */,
      29,    0,  252,    2, 0x08,   50 /* Private */,
      30,    0,  253,    2, 0x08,   51 /* Private */,
      31,    0,  254,    2, 0x08,   52 /* Private */,
      32,    2,  255,    2, 0x08,   53 /* Private */,
      34,    4,  260,    2, 0x08,   56 /* Private */,
      34,    3,  269,    2, 0x28,   61 /* Private | MethodCloned */,
      38,    2,  276,    2, 0x08,   65 /* Private */,
      39,    2,  281,    2, 0x08,   68 /* Private */,
      40,    2,  286,    2, 0x08,   71 /* Private */,
      42,    0,  291,    2, 0x08,   74 /* Private */,
      43,    3,  292,    2, 0x08,   75 /* Private */,
      43,    2,  299,    2, 0x28,   79 /* Private | MethodCloned */,
      46,    2,  304,    2, 0x08,   82 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 8, 0x80000000 | 10, QMetaType::Bool,    4,    7,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 8, 0x80000000 | 10,    4,    7,    9,   11,
    0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 16, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 10,   15,   17,   18,   20,   11,
    0x80000000 | 8, 0x80000000 | 14, 0x80000000 | 16, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 10, QMetaType::Bool,   15,   17,   18,   20,   11,   22,
    0x80000000 | 8, 0x80000000 | 14, 0x80000000 | 16, QMetaType::QString, 0x80000000 | 19, 0x80000000 | 10,   15,   17,   18,   20,   11,
    0x80000000 | 24, 0x80000000 | 16, 0x80000000 | 19, 0x80000000 | 10,   17,   20,   11,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 24, QMetaType::Bool,   11,   26,   27,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 8, QMetaType::Bool,   11,   26,   27,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 14, QMetaType::Bool,   11,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   33,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,   35,   36,   37,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   35,   36,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   33,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16,    4,   17,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   41,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 44,    4,   33,   45,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   33,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   33,

       0        // eod
};

void CreateDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateDocument *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fetchTotals((*reinterpret_cast< QSqlQuery(*)>(_a[1]))); break;
        case 1: { QString _r = _t->fetchTotalsValuesForSql();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->fetchRateAndAmount((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QLineEdit*(*)>(_a[3])),(*reinterpret_cast< QGridLayout*(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->fetchRateAndAmount((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QLineEdit*(*)>(_a[3])),(*reinterpret_cast< QGridLayout*(*)>(_a[4]))); break;
        case 4: { QLabel* _r = _t->createTotalsLabel((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4])),(*reinterpret_cast< QGridLayout*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = std::move(_r); }  break;
        case 5: { QLineEdit* _r = _t->createTotalsLineEdit((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4])),(*reinterpret_cast< QGridLayout*(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = std::move(_r); }  break;
        case 6: { QLineEdit* _r = _t->createTotalsLineEdit((*reinterpret_cast< QLabel*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QWidget*(*)>(_a[4])),(*reinterpret_cast< QGridLayout*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = std::move(_r); }  break;
        case 7: { QFrame* _r = _t->createTotalsLine((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< QGridLayout*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QFrame**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setTotalsRowHidden((*reinterpret_cast< QGridLayout*(*)>(_a[1])),(*reinterpret_cast< QFrame*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->setTotalsRowHidden((*reinterpret_cast< QGridLayout*(*)>(_a[1])),(*reinterpret_cast< QLineEdit*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->setTotalsRowHidden((*reinterpret_cast< QGridLayout*(*)>(_a[1])),(*reinterpret_cast< QLabel*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->on_addCustom_clicked(); break;
        case 12: _t->on_save_clicked(); break;
        case 13: _t->on_cancel_clicked(); break;
        case 14: _t->on_saveDraft_clicked(); break;
        case 15: _t->storeCustomExpenses((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->storeTable((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 17: _t->storeTable((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 18: _t->storeCustomDetails((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->insertRecurringCustomDetails((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 20: _t->fetchCustomDetails((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->deleteCustomDetail(); break;
        case 22: _t->fetchDetails((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< TableFlag(*)>(_a[3]))); break;
        case 23: _t->fetchDetails((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->DeleteDocument((*reinterpret_cast< QSqlQuery(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFrame* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLineEdit* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGridLayout* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject CreateDocument::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CreateDocument.offsetsAndSize,
    qt_meta_data_CreateDocument,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CreateDocument_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<int *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<int *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<int *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QFrame *, std::false_type>, QtPrivate::TypeAndForceComplete<int *, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QFrame *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QLineEdit *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QGridLayout *, std::false_type>, QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<int *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<TableFlag, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSqlQuery, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *CreateDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateDocument.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CreateDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
