/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(458, 300);
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 40, 68, 15));
        pushButton = new QPushButton(User);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 190, 93, 28));
        pushButton_2 = new QPushButton(User);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 190, 93, 28));
        pushButton_3 = new QPushButton(User);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 190, 93, 28));
        lineEdit = new QLineEdit(User);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 90, 171, 21));
        lineEdit_2 = new QLineEdit(User);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 130, 171, 21));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(User);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 68, 15));
        label_3 = new QLabel(User);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 130, 68, 15));
        pushButton_4 = new QPushButton(User);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 250, 81, 31));

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QDialog *User)
    {
        User->setWindowTitle(QApplication::translate("User", "\346\254\242\350\277\216\357\274\201", nullptr));
        label->setText(QApplication::translate("User", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("User", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("User", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QApplication::translate("User", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("User", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("User", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("User", "\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("User", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_4->setText(QApplication::translate("User", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
