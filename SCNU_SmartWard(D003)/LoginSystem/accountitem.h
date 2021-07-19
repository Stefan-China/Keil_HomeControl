#ifndef ACCOUNTITEM_H
#define ACCOUNTITEM_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>

class AccountItem : public QWidget
{
    Q_OBJECT
public:
    explicit AccountItem(QWidget *parent = nullptr);
            ~AccountItem();

    void setAccountNumber(QString account_text);
    QString getAccountNumber();
private:
        void mousePressEvent(QMouseEvent *event);
signals:
        void SignalRemoveAccount_(QString);
        void SignalShowAccount_(QString);

private slots:
        void removeAccount();

private:
        bool m_Mouse_press;
        QLabel * m_pAccount_number;
        QPushButton * m_pDelede_button;
};

#endif // ACCOUNTITEM_H
