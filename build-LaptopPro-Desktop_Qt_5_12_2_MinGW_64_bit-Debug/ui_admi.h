/********************************************************************************
** Form generated from reading UI file 'admi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMI_H
#define UI_ADMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Admi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Admi)
    {
        if (Admi->objectName().isEmpty())
            Admi->setObjectName(QString::fromUtf8("Admi"));
        Admi->resize(400, 272);
        label = new QLabel(Admi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 30, 91, 21));
        label_2 = new QLabel(Admi);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 81, 16));
        label_3 = new QLabel(Admi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 140, 68, 15));
        lineEdit = new QLineEdit(Admi);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 90, 113, 21));
        lineEdit_2 = new QLineEdit(Admi);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 140, 113, 21));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Admi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 190, 93, 28));
        pushButton_2 = new QPushButton(Admi);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 190, 93, 28));

        retranslateUi(Admi);

        QMetaObject::connectSlotsByName(Admi);
    } // setupUi

    void retranslateUi(QDialog *Admi)
    {
        Admi->setWindowTitle(QApplication::translate("Admi", "\346\254\242\350\277\216\357\274\201", nullptr));
        label->setText(QApplication::translate("Admi", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        label_2->setText(QApplication::translate("Admi", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Admi", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("Admi", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("Admi", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admi: public Ui_Admi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMI_H
