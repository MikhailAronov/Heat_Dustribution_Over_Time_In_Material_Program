/********************************************************************************
** Form generated from reading UI file 'bodyofcalculation.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODYOFCALCULATION_H
#define UI_BODYOFCALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_BodyOfCalculation
{
public:

    void setupUi(QDialog *BodyOfCalculation)
    {
        if (BodyOfCalculation->objectName().isEmpty())
            BodyOfCalculation->setObjectName(QString::fromUtf8("BodyOfCalculation"));
        BodyOfCalculation->resize(400, 300);

        retranslateUi(BodyOfCalculation);

        QMetaObject::connectSlotsByName(BodyOfCalculation);
    } // setupUi

    void retranslateUi(QDialog *BodyOfCalculation)
    {
        BodyOfCalculation->setWindowTitle(QCoreApplication::translate("BodyOfCalculation", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BodyOfCalculation: public Ui_BodyOfCalculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODYOFCALCULATION_H
