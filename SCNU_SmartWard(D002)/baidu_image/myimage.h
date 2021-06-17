#ifndef MYIMAGE_H
#define MYIMAGE_H
#include <QString>
#include <QImage>
#include <QBuffer>
#include <QByteArray>
#include <QTextCodec>
class Myimage
{
public:
    Myimage();
    static QByteArray imageToBase64(QString imgPath);

};

#endif // MYIMAGE_H
