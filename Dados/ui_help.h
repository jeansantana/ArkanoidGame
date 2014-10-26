/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Fri Nov 9 00:27:16 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <HelpView.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QGridLayout *gridLayout;
    HelpView *widget;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(640, 480);
        Help->setMinimumSize(QSize(640, 480));
        Help->setMaximumSize(QSize(640, 480));
        gridLayout = new QGridLayout(Help);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new HelpView(Help);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(515, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(Help);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(98, 27));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(Help);
        QObject::connect(pushButton, SIGNAL(pressed()), Help, SLOT(close()));

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Instru\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Help", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
