#ifndef GLOBAL_H
#define GLOBAL_H

#include <QStringBuilder>
#include <map>


enum TableFlag : unsigned char {
    PR = 0,
    QR = 1,
    PO = 2,
    RR = 3,
    MR = 4,
};

namespace CSS {
    static const QString Normal = "color: #000000; background-color: #ffffff;"; //grey
    static const QString Alert = "color: #aa4471; background-color: #ffe4e4;"; //red
};

QString returnStringINN(QString string, QString ifNotNull = QString(), QString ifNull = QString());
QString escapeSql(QString string); //This will escape the (') string delimiter in SQLite to protect from SQL Injections.

#endif // GLOBAL_H
