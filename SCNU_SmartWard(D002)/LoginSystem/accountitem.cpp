#include "accountitem.h"

AccountItem::AccountItem(QWidget *parent) : QWidget(parent)
{
    m_Mouse_press = false;
        m_pAccount_number = new QLabel();
        m_pDelede_button = new QPushButton();

//        m_pDelede_button->setIcon(QIcon(":/Close"));
        m_pDelede_button->setFixedSize(20, 20);
//        m_pDelede_button->setStyleSheet("background:transparent;");
        m_pDelede_button->setStyleSheet("QPushButton{border-image: url(:/image/btn_Close .png);}"
                                        "QPushButton:hover{border-image: url(:/image/btn_Close _hover.png);}");
        //background:transparent;  :/image/btn_Close .png  :/image/btn_Close _hover.png

        connect(m_pDelede_button, SIGNAL(clicked()), this, SLOT(removeAccount()));

        QHBoxLayout *main_layout = new QHBoxLayout();
        main_layout->addWidget(m_pAccount_number);
        main_layout->addStretch();
        main_layout->addWidget(m_pDelede_button);
        main_layout->setContentsMargins(5, 5, 5, 5);
        main_layout->setSpacing(5);
        this->setLayout(main_layout);
}

AccountItem::~AccountItem()
{

}

void AccountItem::setAccountNumber(QString account_text)
{
    m_pAccount_number->setText(account_text);
    m_pAccount_number->setAlignment(Qt::AlignCenter);
}

QString AccountItem::getAccountNumber()
{
    QString account_number_text = m_pAccount_number->text();

    return account_number_text;
}

void AccountItem::removeAccount()
{
    QString account_number_text = m_pAccount_number->text();
    emit SignalRemoveAccount_(account_number_text);
}

void AccountItem::mousePressEvent(QMouseEvent *event)
{
    emit SignalShowAccount_(m_pAccount_number->text());
}
