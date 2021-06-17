#include "combobox.h"

ComboBox::ComboBox(QWidget *parent)	: QComboBox(parent)
{
    m_pListWidget = new QListWidget(this);
    this->setModel(m_pListWidget->model());
    this->setView(m_pListWidget);
}

ComboBox::~ComboBox()
{

}

void ComboBox::focusInEvent(QFocusEvent *event)
{
    QComboBox::focusInEvent(event);
    emit GetFocus();

}
void ComboBox::focusOutEvent(QFocusEvent *event)
{
    QComboBox::focusOutEvent(event);
    emit LostFocus();
}

//重写mousePressEvent事件,检测事件类型是不是点击了鼠标左键
void ComboBox::mousePressEvent(QMouseEvent *event)
{
    //如果单击了就触发clicked信号
    if (event->button() == Qt::LeftButton)
    {
        //触发clicked信号
        emit clicked();
    }
    //将该事件传给父类处理
    QComboBox::mousePressEvent(event);
}

// 解决垂直滚动条出现，多次popup时item错乱的问题  （重要）
void ComboBox::hidePopup()
{
    m_pListWidget->scrollToTop();
    QComboBox::hidePopup();
}

void ComboBox::showPopup()
{
    QComboBox::showPopup();
    m_pListWidget->scrollToTop();
}

void ComboBox::increaseItem(QString text)
{
    AccountItem *account_item = new AccountItem(this);
    account_item->setAccountNumber(text);
    connect(account_item, SIGNAL(SignalShowAccount_(QString)), this, SLOT(SlotShowAccount(QString)));
    connect(account_item, SIGNAL(SignalRemoveAccount_(QString)), this, SLOT(SlotRemoveAccount(QString)));
    QListWidgetItem *list_item = new QListWidgetItem(m_pListWidget);
    m_pListWidget->setItemWidget(list_item, account_item);
}

void ComboBox::removeItem(QString account)
{
    int list_count = getListWidgetCount();
    for (int i = 0; i < list_count; i++)
    {
        QListWidgetItem *item = m_pListWidget->item(i);
        AccountItem *account_item = (AccountItem *)(m_pListWidget->itemWidget(item));
        QString account_number = account_item->getAccountNumber();
        if (account == account_number)
        {
            m_pListWidget->takeItem(i);
            delete item;
//            emit SignalRemoveItem(i);
        }
    }
}

int ComboBox::getListWidgetCount()
{
    return m_pListWidget->count();
}

void ComboBox::SlotShowAccount(QString account)
{
    setEditText(account);
    hidePopup();
//    emit SignalShowAccount(account.trimmed());
}

void ComboBox::SlotRemoveAccount(QString account)
{
    emit signal_to_db_remove_account(account);//发送一个信号给数据库，让其删除当前的这个账号(该操作在login_register.cpp里完成)
    hidePopup();
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, QStringLiteral("删除"), QStringLiteral("确定要删除该账号吗?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if (rb == QMessageBox::Yes)
    {
        int list_count = getListWidgetCount();
        for (int i = 0; i < list_count; i++)
        {
            QListWidgetItem *item = m_pListWidget->item(i);
            AccountItem *account_item = (AccountItem *)(m_pListWidget->itemWidget(item));
            QString account_number = account_item->getAccountNumber();
            if (account == account_number)
            {
                m_pListWidget->takeItem(i);
                delete item;
//                emit SignalRemoveItem(i);
                break;
            }
        }
    }
}

bool  ComboBox::findItem(QString account)
{
    int list_count = getListWidgetCount();
    for (int i = 0; i < list_count; i++)
    {
        QListWidgetItem *item = m_pListWidget->item(i);
        AccountItem *account_item = (AccountItem *)(m_pListWidget->itemWidget(item));
        QString account_number = account_item->getAccountNumber();
        if (account == account_number)
        {
            return true;
        }
    }
    return false;
}
