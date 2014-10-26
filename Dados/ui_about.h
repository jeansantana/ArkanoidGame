/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Thu Nov 8 20:38:54 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(550, 219);
        About->setMinimumSize(QSize(550, 219));
        About->setMaximumSize(QSize(550, 219));
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(425, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(98, 27));
        pushButton->setMaximumSize(QSize(98, 27));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(About);
        QObject::connect(pushButton, SIGNAL(pressed()), About, SLOT(close()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("About", "Arknoid Game\n"
"Desenvolvedores:\n"
"Caio Santos\n"
"Jean Silva\n"
"\n"
"Jogo baseado no cl\303\241ssico arcade Arkanoid e desenvolvido usando Qt e OpenGL", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("About", "Para mais informa\303\247\303\265es: http://www.lcc.ufrn.br/~caiocesar/arkanoid/index.html", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("About", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
