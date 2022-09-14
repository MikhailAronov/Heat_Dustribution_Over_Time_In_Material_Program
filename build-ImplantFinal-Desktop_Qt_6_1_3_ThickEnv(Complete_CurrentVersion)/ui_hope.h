/********************************************************************************
** Form generated from reading UI file 'hope.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOPE_H
#define UI_HOPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_hope
{
public:
    QTextEdit *textEdit;
    QLabel *image;
    QPushButton *quit;
    QPushButton *returntomain;
    QCustomPlot *GraphRes;
    QCustomPlot *GraphMostCold;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonColdGraph;
    QLabel *labelColdGraph;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonFinalGraph;
    QLabel *labelFinalGraph;

    void setupUi(QDialog *hope)
    {
        if (hope->objectName().isEmpty())
            hope->setObjectName(QString::fromUtf8("hope"));
        hope->resize(783, 600);
        textEdit = new QTextEdit(hope);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(31, 411, 601, 99));
        image = new QLabel(hope);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(640, 410, 111, 101));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        quit = new QPushButton(hope);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(140, 520, 75, 23));
        returntomain = new QPushButton(hope);
        returntomain->setObjectName(QString::fromUtf8("returntomain"));
        returntomain->setGeometry(QRect(540, 520, 75, 23));
        GraphRes = new QCustomPlot(hope);
        GraphRes->setObjectName(QString::fromUtf8("GraphRes"));
        GraphRes->setGeometry(QRect(30, 30, 721, 301));
        GraphMostCold = new QCustomPlot(hope);
        GraphMostCold->setObjectName(QString::fromUtf8("GraphMostCold"));
        GraphMostCold->setGeometry(QRect(30, 30, 721, 301));
        layoutWidget = new QWidget(hope);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 350, 721, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonColdGraph = new QRadioButton(layoutWidget);
        radioButtonColdGraph->setObjectName(QString::fromUtf8("radioButtonColdGraph"));

        verticalLayout->addWidget(radioButtonColdGraph);

        labelColdGraph = new QLabel(layoutWidget);
        labelColdGraph->setObjectName(QString::fromUtf8("labelColdGraph"));
        labelColdGraph->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelColdGraph);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        radioButtonFinalGraph = new QRadioButton(layoutWidget);
        radioButtonFinalGraph->setObjectName(QString::fromUtf8("radioButtonFinalGraph"));

        verticalLayout_2->addWidget(radioButtonFinalGraph);

        labelFinalGraph = new QLabel(layoutWidget);
        labelFinalGraph->setObjectName(QString::fromUtf8("labelFinalGraph"));
        labelFinalGraph->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelFinalGraph);


        horizontalLayout->addLayout(verticalLayout_2);

        textEdit->raise();
        image->raise();
        quit->raise();
        returntomain->raise();
        GraphRes->raise();
        layoutWidget->raise();
        GraphMostCold->raise();

        retranslateUi(hope);

        QMetaObject::connectSlotsByName(hope);
    } // setupUi

    void retranslateUi(QDialog *hope)
    {
        hope->setWindowTitle(QCoreApplication::translate("hope", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("hope", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        image->setText(QCoreApplication::translate("hope", "TextLabel", nullptr));
        quit->setText(QCoreApplication::translate("hope", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        returntomain->setText(QCoreApplication::translate("hope", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217", nullptr));
        radioButtonColdGraph->setText(QCoreApplication::translate("hope", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\262 \320\274\320\276\320\274\320\265\320\275\321\202 \320\275\320\260\320\270\320\261\320\276\320\273\321\214\321\210\320\265\320\271 \320\267\320\276\320\275\321\213 \320\275\320\270\320\266\320\265 305 \320\232(32\302\260\320\241)  \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \321\201\320\273\320\276\321\217", nullptr));
        labelColdGraph->setText(QCoreApplication::translate("hope", "\320\222 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270: \320\245\320\245\320\245 \321\201", nullptr));
        radioButtonFinalGraph->setText(QCoreApplication::translate("hope", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\275\320\260 \320\274\320\276\320\274\320\265\320\275\321\202 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        labelFinalGraph->setText(QCoreApplication::translate("hope", "\320\222 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270: \320\245\320\245\320\245 \321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hope: public Ui_hope {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOPE_H
