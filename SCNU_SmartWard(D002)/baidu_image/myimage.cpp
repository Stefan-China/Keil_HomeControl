#include "myimage.h"

Myimage::Myimage()
{

}
 QByteArray Myimage::imageToBase64(QString imgPath)
 {
     QImage img(imgPath);
     QByteArray ba;
     QBuffer buf(&ba);
     buf.open(QIODevice::WriteOnly);
     img.save(&buf, "JPG");
     QByteArray base64 = ba.toBase64();

     QTextCodec *codec= QTextCodec::codecForName("UTF-8");
     //对图片urlencode
     QByteArray imgData =codec->fromUnicode(base64).toPercentEncoding();

     return imgData;
 }


