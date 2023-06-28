/********************************************************************************
** Form generated from reading UI file 'tuijian.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUIJIAN_H
#define UI_TUIJIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TuiJian
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox_6;
    QPushButton *pushButton_3;

    void setupUi(QWidget *TuiJian)
    {
        if (TuiJian->objectName().isEmpty())
            TuiJian->setObjectName(QString::fromUtf8("TuiJian"));
        TuiJian->resize(557, 381);
        pushButton = new QPushButton(TuiJian);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 310, 91, 31));
        label_4 = new QLabel(TuiJian);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 200, 111, 20));
        label = new QLabel(TuiJian);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 101, 16));
        pushButton_2 = new QPushButton(TuiJian);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 60, 91, 21));
        label_3 = new QLabel(TuiJian);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 150, 121, 20));
        label_2 = new QLabel(TuiJian);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 161, 16));
        lineEdit_7 = new QLineEdit(TuiJian);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(270, 150, 171, 20));
        comboBox_6 = new QComboBox(TuiJian);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(270, 200, 171, 21));
        pushButton_3 = new QPushButton(TuiJian);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 312, 91, 31));

        retranslateUi(TuiJian);

        comboBox_6->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TuiJian);
    } // setupUi

    void retranslateUi(QWidget *TuiJian)
    {
        TuiJian->setWindowTitle(QApplication::translate("TuiJian", "\346\216\250\350\215\220\351\205\215\347\275\256", nullptr));
        pushButton->setText(QApplication::translate("TuiJian", "\345\257\273\346\211\276\346\216\250\350\215\220\351\205\215\347\275\256", nullptr));
        label_4->setText(QApplication::translate("TuiJian", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\344\275\277\347\224\250\345\234\272\346\231\257", nullptr));
        label->setText(QApplication::translate("TuiJian", "\346\216\250\350\215\220\351\205\215\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("TuiJian", "\351\242\204\346\265\213\344\275\277\347\224\250\345\234\272\346\231\257", nullptr));
        label_3->setText(QApplication::translate("TuiJian", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\351\242\204\347\256\227\357\274\210\345\205\203\357\274\211", nullptr));
        label_2->setText(QApplication::translate("TuiJian", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\351\242\204\347\256\227\344\273\245\345\217\212\344\275\277\347\224\250\345\234\272\346\231\257", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QString());
        comboBox_6->setItemText(0, QApplication::translate("TuiJian", "\345\225\206\345\212\241\345\212\236\345\205\254", nullptr));
        comboBox_6->setItemText(1, QApplication::translate("TuiJian", "\351\253\230\346\270\205\346\270\270\346\210\217", nullptr));
        comboBox_6->setItemText(2, QApplication::translate("TuiJian", "\345\245\263\346\200\247\345\256\232\344\275\215", nullptr));
        comboBox_6->setItemText(3, QApplication::translate("TuiJian", "\345\256\266\345\272\255\345\275\261\351\237\263", nullptr));
        comboBox_6->setItemText(4, QApplication::translate("TuiJian", "\345\255\246\347\224\237\351\200\202\347\224\250", nullptr));
        comboBox_6->setItemText(5, QApplication::translate("TuiJian", "\350\275\273\350\226\204\344\276\277\346\220\272", nullptr));
        comboBox_6->setItemText(6, QApplication::translate("TuiJian", "\345\260\212\350\264\265\346\227\227\350\210\260", nullptr));

        pushButton_3->setText(QApplication::translate("TuiJian", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TuiJian: public Ui_TuiJian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUIJIAN_H
