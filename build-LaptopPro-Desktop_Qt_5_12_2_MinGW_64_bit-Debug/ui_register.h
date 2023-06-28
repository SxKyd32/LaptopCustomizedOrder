/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(480, 337);
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 20, 68, 15));
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 50, 161, 21));
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 80, 161, 21));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 110, 161, 21));
        lineEdit_4 = new QLineEdit(Register);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 140, 161, 21));
        lineEdit_5 = new QLineEdit(Register);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 170, 161, 21));
        lineEdit_6 = new QLineEdit(Register);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 210, 111, 21));
        lineEdit_7 = new QLineEdit(Register);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 240, 113, 21));
        lineEdit_8 = new QLineEdit(Register);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(100, 280, 113, 21));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 250, 93, 28));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 290, 93, 28));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 68, 15));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 68, 15));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 68, 15));
        label_5 = new QLabel(Register);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 68, 15));
        label_6 = new QLabel(Register);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 68, 15));
        label_7 = new QLabel(Register);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 68, 15));
        label_8 = new QLabel(Register);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 210, 68, 15));
        label_9 = new QLabel(Register);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 280, 68, 15));
        label_10 = new QLabel(Register);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 240, 68, 15));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "\346\254\242\350\277\216\357\274\201", nullptr));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Register", "\347\224\250\344\272\216\347\231\273\345\275\225\347\232\204\350\264\246\346\210\267", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Register", "\347\224\250\344\272\216\347\231\273\345\275\225\347\232\204\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QApplication::translate("Register", "\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Register", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Register", "\346\230\265\347\247\260\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Register", "\347\234\237\345\256\236\345\247\223\345\220\215", nullptr));
        label_6->setText(QApplication::translate("Register", "\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Register", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_8->setText(QApplication::translate("Register", "\347\234\201\344\273\275\357\274\232", nullptr));
        label_9->setText(QApplication::translate("Register", "\345\214\272\345\216\277\357\274\232", nullptr));
        label_10->setText(QApplication::translate("Register", "\345\237\216\345\270\202\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
