#ifndef SIGN_ALGORITHM_H
#define SIGN_ALGORITHM_H

#include <QCryptographicHash>
#include <QDateTime>
#include <QProcess>
#include <QMap>
#include<QDebug>
#include<QObject>

class Sign_algorithm:public QObject
{
    Q_OBJECT
public:
    Sign_algorithm();

    QByteArray sign(QMap<QString, QString> map_chart);
    QByteArray Encryption_Md5(QByteArray cipher);
    QString  Get_UUID();
    QString  Get_Time();

    QProcess *pro_cmd;
    QString  UUID;

};

#endif // SIGN_ALGORITHM_H
