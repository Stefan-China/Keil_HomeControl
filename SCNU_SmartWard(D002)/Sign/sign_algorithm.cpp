#include "sign_algorithm.h"

Sign_algorithm::Sign_algorithm()
{
    pro_cmd=new QProcess(this);
    QObject::connect(pro_cmd,&QProcess::readyReadStandardOutput,this,&Sign_algorithm::Get_UUID);
    pro_cmd->start("wmic csproduct get uuid");
    pro_cmd->waitForStarted();
    //析构函数？
    //pro_cmd->terminate();
    pro_cmd->waitForFinished();
}

QString Sign_algorithm::Get_UUID()
{
    UUID=pro_cmd->readAllStandardOutput().data();
    UUID=UUID.trimmed();
    UUID=UUID.right(36);
    return UUID;
    qDebug()<<"UUID"<<UUID<<endl;
}

QByteArray Sign_algorithm::sign(QMap<QString, QString> map_chart)
{
    //步骤一：将请求参数按顺序urlencode后用&符号链接起来得到
    QByteArray str_list;
    QMap<QString,QString>::const_iterator i;
    for(i=map_chart.constBegin();i!=map_chart.constEnd();++i)
    {
        QByteArray j=i->toUtf8();
        j=j.toPercentEncoding();
        str_list.append(j).append("&");
    }
//    qDebug()<<"A:    "<<str_list<<endl;

    //步骤二：将A用&符号链接APIKEY得到
    str_list.append("4fa550328be03619eebd0f2033e0b7da");
//    qDebug()<<"B:    "<<str_list<<endl;

    //步骤三：将B进行md5加密得到
    QByteArray strMd5_1=Encryption_Md5(str_list);
//    qDebug()<<"C:    "<<strMd5_1<<endl;

    //步骤四：最后将C转换成大写得到
    QByteArray strMd5_2=strMd5_1.toUpper();
//    qDebug()<<"D:    "<<strMd5_2<<endl;

    //步骤五：将D赋值给accessSign
    QByteArray accessSign=strMd5_2;
    return accessSign;

/*
        //步骤一：根据参数名称（除accessSign签名和图片）将所有请求参数按照字母先后顺序升序排序，用连接符&链接得到A 。
        //（map_1中键在遍历时自动进行升序排序）
        QString str_list;
        QMap<QString, QString>::const_iterator i;
        for(i=map_chart.constBegin();i!=map_chart.constEnd();++i)
        {
            str_list.append(i.key()).append("=").append(i.value()).append("&");
        }
        str_list.remove(str_list.length()-1,1);
        qDebug()<<"A:    "<<str_list<<endl;

        //步骤二： 将a操作后的值A再进行 URLEncode(utf-8)后，得到字符串B。
        QByteArray str_cipher=str_list.toUtf8();
        str_cipher=str_cipher.toPercentEncoding();

        qDebug()<<"B:    "<<str_cipher<<endl;

        //步骤三：将b步奏得到的B后面直接带上key秘钥得到C。
        str_cipher.append("7c60a39dab26c9f4088090f61ffdd0e4");

        qDebug()<<"C:    "<<str_cipher<<endl;

        //步骤四：将c步奏得到的C进行MD5加密，然后转换成大写得到D。
        QByteArray strMd5_1=Encryption_Md5(str_cipher);
        QByteArray strMd5_2=strMd5_1.toUpper();

        qDebug()<<"D:    "<<strMd5_2<<endl;

        //步骤五：将D赋值给accessSign
        QByteArray accessSign=strMd5_2;
        return accessSign;
*/
}

QByteArray Sign_algorithm::Encryption_Md5(QByteArray cipher)
{
    QByteArray strMd5 = QCryptographicHash::hash(cipher, QCryptographicHash::Md5).toHex();
    return strMd5;
}

QString Sign_algorithm::Get_Time()
{
    qint64 Time=QDateTime::currentDateTime().toMSecsSinceEpoch();
    QString str_time=QString::number(Time);
    //qDebug()<<"str_time   =   "<<str_time<<endl;//13位时间戳 timeStamp
    return str_time;
}
