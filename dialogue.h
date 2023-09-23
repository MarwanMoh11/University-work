/********************************************************************************
** Form generated from reading UI file 'dialogue.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(685, 507);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 80, 411, 281));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 131, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 70, 101, 20));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 100, 131, 25));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(250, 100, 131, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 71, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 190, 181, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 170, 93, 20));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 220, 181, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 250, 171, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 170, 91, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 190, 91, 20));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Form", "Menu", nullptr));
        label->setText(QCoreApplication::translate("Form", "Chicken Options", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Meat Options", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Item Price:", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Number of Added items:", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "Add to cart", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "view cart", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DIALOGUE_H
