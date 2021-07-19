#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QObject>
#include <QComboBox>
#include <QListWidget>
#include <QMessageBox>
#include <QMouseEvent>
#include "accountitem.h"

class ComboBox : public QComboBox
{
    Q_OBJECT
public:
    explicit ComboBox(QWidget *parent = 0);
    ~ComboBox();
public:
    void hidePopup();
    void showPopup();
    void increaseItem(QString text);//添加下拉项
    void removeItem(QString account);//删除下拉项,返回该项的位置
    int getListWidgetCount();//获取下拉项的个数
    bool findItem(QString account);

    void focusInEvent(QFocusEvent *event);    //覆盖这两个函数
    void focusOutEvent(QFocusEvent *event);

protected:
    //重写mousePressEvent事件
    virtual void mousePressEvent(QMouseEvent *event);

signals:
//    void SignalShowAccount(QString account);
//    void SignalRemoveItem(int i);
    void signal_to_db_remove_account(QString);

    void GetFocus();                   //获得焦点信号
    void LostFocus();                  //失去焦点信号
    //自定义clicked()信号,在mousePressEvent事件发生时触发
    void clicked();
private slots :
    void SlotShowAccount(QString);
    void SlotRemoveAccount(QString);

private:
    QListWidget *m_pListWidget;
};

#endif // COMBOBOX_H
