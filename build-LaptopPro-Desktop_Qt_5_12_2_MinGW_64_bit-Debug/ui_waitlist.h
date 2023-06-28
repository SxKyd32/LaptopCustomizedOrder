/********************************************************************************
** Form generated from reading UI file 'waitlist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITLIST_H
#define UI_WAITLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waitlist
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *waitlist)
    {
        if (waitlist->objectName().isEmpty())
            waitlist->setObjectName(QString::fromUtf8("waitlist"));
        waitlist->resize(549, 387);
        pushButton = new QPushButton(waitlist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 320, 75, 23));
        tableWidget = new QTableWidget(waitlist);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(70, 80, 421, 191));
        label = new QLabel(waitlist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 54, 12));

        retranslateUi(waitlist);

        QMetaObject::connectSlotsByName(waitlist);
    } // setupUi

    void retranslateUi(QWidget *waitlist)
    {
        waitlist->setWindowTitle(QApplication::translate("waitlist", "\345\276\205\350\264\255\350\241\250", nullptr));
        pushButton->setText(QApplication::translate("waitlist", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("waitlist", "\350\256\242\345\215\225\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("waitlist", "\346\267\273\345\212\240\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("waitlist", "\346\267\273\345\212\240\346\227\266\351\227\264", nullptr));
        label->setText(QApplication::translate("waitlist", "\345\276\205\350\264\255\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class waitlist: public Ui_waitlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITLIST_H
