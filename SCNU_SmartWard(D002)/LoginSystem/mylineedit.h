#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>
#include <QMouseEvent>

class MyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MyLineEdit(QWidget *parent = 0);
    void focusInEvent(QFocusEvent *event);    //覆盖这两个函数
    void focusOutEvent(QFocusEvent *event);
protected:
    //重写mousePressEvent事件
    virtual void mousePressEvent(QMouseEvent *event);
signals:
   void GetFocus();                   //获得焦点信号
   void LostFocus();                  //失去焦点信号
   //自定义clicked()信号,在mousePressEvent事件发生时触发
   void clicked();
};

#endif // MYLINEEDIT_H
