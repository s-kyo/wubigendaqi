/****************************************************************************
** Meta object code from reading C++ file 'wfilterword.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wfilterword.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wfilterword.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WfilterWord_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WfilterWord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WfilterWord_t qt_meta_stringdata_WfilterWord = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WfilterWord"
QT_MOC_LITERAL(1, 12, 15), // "noticeMainStart"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "selectItemFIle"
QT_MOC_LITERAL(4, 44, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 61, 4), // "item"
QT_MOC_LITERAL(6, 66, 29), // "on_pushButton_addFile_clicked"
QT_MOC_LITERAL(7, 96, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(8, 123, 14), // "checkInputTime"
QT_MOC_LITERAL(9, 138, 8), // "isSelect"
QT_MOC_LITERAL(10, 147, 7), // "readIni"
QT_MOC_LITERAL(11, 155, 7) // "saveIni"

    },
    "WfilterWord\0noticeMainStart\0\0"
    "selectItemFIle\0QListWidgetItem*\0item\0"
    "on_pushButton_addFile_clicked\0"
    "on_pushButton_send_clicked\0checkInputTime\0"
    "isSelect\0readIni\0saveIni"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WfilterWord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WfilterWord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WfilterWord *_t = static_cast<WfilterWord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->noticeMainStart(); break;
        case 1: _t->selectItemFIle((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_addFile_clicked(); break;
        case 3: _t->on_pushButton_send_clicked(); break;
        case 4: _t->checkInputTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->readIni(); break;
        case 6: _t->saveIni(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WfilterWord::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WfilterWord::noticeMainStart)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WfilterWord::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WfilterWord.data,
      qt_meta_data_WfilterWord,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WfilterWord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WfilterWord::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WfilterWord.stringdata0))
        return static_cast<void*>(const_cast< WfilterWord*>(this));
    return QWidget::qt_metacast(_clname);
}

int WfilterWord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WfilterWord::noticeMainStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
