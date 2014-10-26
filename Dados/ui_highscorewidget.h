/********************************************************************************
** Form generated from reading UI file 'highscorewidget.ui'
**
** Created: Thu Nov 8 20:38:54 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCOREWIDGET_H
#define UI_HIGHSCOREWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HighScoreWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *rank;
    QLabel *name;
    QLabel *level;
    QLabel *score;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_1;
    QTextEdit *no1Name;
    QTextEdit *no1Level;
    QTextEdit *no1Score;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *no2Name;
    QTextEdit *no2Level;
    QTextEdit *no2Score;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *no3Name;
    QTextEdit *no3Level;
    QTextEdit *no3Score;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTextEdit *no4Name;
    QTextEdit *no4Level;
    QTextEdit *no4Score;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QTextEdit *no5Name;
    QTextEdit *no5Level;
    QTextEdit *no5Score;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QTextEdit *no6Name;
    QTextEdit *no6Level;
    QTextEdit *no6Score;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QTextEdit *no7Name;
    QTextEdit *no7Level;
    QTextEdit *no7Score;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QTextEdit *no8Name;
    QTextEdit *no8Level;
    QTextEdit *no8Score;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QTextEdit *no9Name;
    QTextEdit *no9Level;
    QTextEdit *no9Score;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QTextEdit *no10Name;
    QTextEdit *no10Level;
    QTextEdit *no10Score;
    QSpacerItem *horizontalSpacer_3;
    QLabel *title;

    void setupUi(QWidget *HighScoreWidget)
    {
        if (HighScoreWidget->objectName().isEmpty())
            HighScoreWidget->setObjectName(QString::fromUtf8("HighScoreWidget"));
        HighScoreWidget->resize(400, 500);
        HighScoreWidget->setMinimumSize(QSize(400, 500));
        HighScoreWidget->setMaximumSize(QSize(400, 500));
        gridLayout = new QGridLayout(HighScoreWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(132, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        pushButton = new QPushButton(HighScoreWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(100, 25));
        pushButton->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rank = new QLabel(HighScoreWidget);
        rank->setObjectName(QString::fromUtf8("rank"));
        rank->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(rank);

        name = new QLabel(HighScoreWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(name);

        level = new QLabel(HighScoreWidget);
        level->setObjectName(QString::fromUtf8("level"));
        level->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(level);

        score = new QLabel(HighScoreWidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(score);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        label_1 = new QLabel(HighScoreWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setMinimumSize(QSize(67, 21));
        label_1->setMaximumSize(QSize(67, 21));
        label_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_1->addWidget(label_1);

        no1Name = new QTextEdit(HighScoreWidget);
        no1Name->setObjectName(QString::fromUtf8("no1Name"));
        no1Name->setMinimumSize(QSize(71, 31));
        no1Name->setMaximumSize(QSize(71, 31));
        no1Name->setReadOnly(true);

        horizontalLayout_1->addWidget(no1Name);

        no1Level = new QTextEdit(HighScoreWidget);
        no1Level->setObjectName(QString::fromUtf8("no1Level"));
        no1Level->setMinimumSize(QSize(71, 31));
        no1Level->setMaximumSize(QSize(71, 31));
        no1Level->setReadOnly(true);

        horizontalLayout_1->addWidget(no1Level);

        no1Score = new QTextEdit(HighScoreWidget);
        no1Score->setObjectName(QString::fromUtf8("no1Score"));
        no1Score->setMinimumSize(QSize(71, 31));
        no1Score->setMaximumSize(QSize(71, 31));
        no1Score->setReadOnly(true);

        horizontalLayout_1->addWidget(no1Score);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(HighScoreWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(67, 21));
        label_2->setMaximumSize(QSize(67, 21));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        no2Name = new QTextEdit(HighScoreWidget);
        no2Name->setObjectName(QString::fromUtf8("no2Name"));
        no2Name->setMinimumSize(QSize(71, 31));
        no2Name->setMaximumSize(QSize(71, 31));
        no2Name->setReadOnly(true);

        horizontalLayout_2->addWidget(no2Name);

        no2Level = new QTextEdit(HighScoreWidget);
        no2Level->setObjectName(QString::fromUtf8("no2Level"));
        no2Level->setMinimumSize(QSize(71, 31));
        no2Level->setMaximumSize(QSize(71, 31));
        no2Level->setReadOnly(true);

        horizontalLayout_2->addWidget(no2Level);

        no2Score = new QTextEdit(HighScoreWidget);
        no2Score->setObjectName(QString::fromUtf8("no2Score"));
        no2Score->setMinimumSize(QSize(71, 31));
        no2Score->setMaximumSize(QSize(71, 31));
        no2Score->setReadOnly(true);

        horizontalLayout_2->addWidget(no2Score);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(HighScoreWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(67, 21));
        label_3->setMaximumSize(QSize(67, 21));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        no3Name = new QTextEdit(HighScoreWidget);
        no3Name->setObjectName(QString::fromUtf8("no3Name"));
        no3Name->setMinimumSize(QSize(71, 31));
        no3Name->setMaximumSize(QSize(71, 31));
        no3Name->setReadOnly(true);

        horizontalLayout_3->addWidget(no3Name);

        no3Level = new QTextEdit(HighScoreWidget);
        no3Level->setObjectName(QString::fromUtf8("no3Level"));
        no3Level->setMinimumSize(QSize(71, 31));
        no3Level->setMaximumSize(QSize(71, 31));
        no3Level->setReadOnly(true);

        horizontalLayout_3->addWidget(no3Level);

        no3Score = new QTextEdit(HighScoreWidget);
        no3Score->setObjectName(QString::fromUtf8("no3Score"));
        no3Score->setMinimumSize(QSize(71, 31));
        no3Score->setMaximumSize(QSize(71, 31));
        no3Score->setReadOnly(true);

        horizontalLayout_3->addWidget(no3Score);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(HighScoreWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(67, 21));
        label_4->setMaximumSize(QSize(67, 21));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        no4Name = new QTextEdit(HighScoreWidget);
        no4Name->setObjectName(QString::fromUtf8("no4Name"));
        no4Name->setMinimumSize(QSize(71, 31));
        no4Name->setMaximumSize(QSize(71, 31));
        no4Name->setReadOnly(true);

        horizontalLayout_4->addWidget(no4Name);

        no4Level = new QTextEdit(HighScoreWidget);
        no4Level->setObjectName(QString::fromUtf8("no4Level"));
        no4Level->setMinimumSize(QSize(71, 31));
        no4Level->setMaximumSize(QSize(71, 31));
        no4Level->setReadOnly(true);

        horizontalLayout_4->addWidget(no4Level);

        no4Score = new QTextEdit(HighScoreWidget);
        no4Score->setObjectName(QString::fromUtf8("no4Score"));
        no4Score->setMinimumSize(QSize(71, 31));
        no4Score->setMaximumSize(QSize(71, 31));
        no4Score->setReadOnly(true);

        horizontalLayout_4->addWidget(no4Score);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(HighScoreWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(67, 21));
        label_5->setMaximumSize(QSize(67, 21));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        no5Name = new QTextEdit(HighScoreWidget);
        no5Name->setObjectName(QString::fromUtf8("no5Name"));
        no5Name->setMinimumSize(QSize(71, 31));
        no5Name->setMaximumSize(QSize(71, 31));
        no5Name->setReadOnly(true);

        horizontalLayout_5->addWidget(no5Name);

        no5Level = new QTextEdit(HighScoreWidget);
        no5Level->setObjectName(QString::fromUtf8("no5Level"));
        no5Level->setMinimumSize(QSize(71, 31));
        no5Level->setMaximumSize(QSize(71, 31));
        no5Level->setReadOnly(true);

        horizontalLayout_5->addWidget(no5Level);

        no5Score = new QTextEdit(HighScoreWidget);
        no5Score->setObjectName(QString::fromUtf8("no5Score"));
        no5Score->setMinimumSize(QSize(71, 31));
        no5Score->setMaximumSize(QSize(71, 31));
        no5Score->setReadOnly(true);

        horizontalLayout_5->addWidget(no5Score);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(HighScoreWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(67, 21));
        label_6->setMaximumSize(QSize(67, 21));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        no6Name = new QTextEdit(HighScoreWidget);
        no6Name->setObjectName(QString::fromUtf8("no6Name"));
        no6Name->setMinimumSize(QSize(71, 31));
        no6Name->setMaximumSize(QSize(71, 31));
        no6Name->setReadOnly(true);

        horizontalLayout_6->addWidget(no6Name);

        no6Level = new QTextEdit(HighScoreWidget);
        no6Level->setObjectName(QString::fromUtf8("no6Level"));
        no6Level->setMinimumSize(QSize(71, 31));
        no6Level->setMaximumSize(QSize(71, 31));
        no6Level->setReadOnly(true);

        horizontalLayout_6->addWidget(no6Level);

        no6Score = new QTextEdit(HighScoreWidget);
        no6Score->setObjectName(QString::fromUtf8("no6Score"));
        no6Score->setMinimumSize(QSize(71, 31));
        no6Score->setMaximumSize(QSize(71, 31));
        no6Score->setReadOnly(true);

        horizontalLayout_6->addWidget(no6Score);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(HighScoreWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(67, 21));
        label_7->setMaximumSize(QSize(67, 21));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        no7Name = new QTextEdit(HighScoreWidget);
        no7Name->setObjectName(QString::fromUtf8("no7Name"));
        no7Name->setMinimumSize(QSize(71, 31));
        no7Name->setMaximumSize(QSize(71, 31));
        no7Name->setReadOnly(true);

        horizontalLayout_7->addWidget(no7Name);

        no7Level = new QTextEdit(HighScoreWidget);
        no7Level->setObjectName(QString::fromUtf8("no7Level"));
        no7Level->setMinimumSize(QSize(71, 31));
        no7Level->setMaximumSize(QSize(71, 31));
        no7Level->setReadOnly(true);

        horizontalLayout_7->addWidget(no7Level);

        no7Score = new QTextEdit(HighScoreWidget);
        no7Score->setObjectName(QString::fromUtf8("no7Score"));
        no7Score->setMinimumSize(QSize(71, 31));
        no7Score->setMaximumSize(QSize(71, 31));
        no7Score->setReadOnly(true);

        horizontalLayout_7->addWidget(no7Score);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(HighScoreWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(67, 21));
        label_8->setMaximumSize(QSize(67, 21));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_8);

        no8Name = new QTextEdit(HighScoreWidget);
        no8Name->setObjectName(QString::fromUtf8("no8Name"));
        no8Name->setMinimumSize(QSize(71, 31));
        no8Name->setMaximumSize(QSize(71, 31));
        no8Name->setReadOnly(true);

        horizontalLayout_8->addWidget(no8Name);

        no8Level = new QTextEdit(HighScoreWidget);
        no8Level->setObjectName(QString::fromUtf8("no8Level"));
        no8Level->setMinimumSize(QSize(71, 31));
        no8Level->setMaximumSize(QSize(71, 31));
        no8Level->setReadOnly(true);

        horizontalLayout_8->addWidget(no8Level);

        no8Score = new QTextEdit(HighScoreWidget);
        no8Score->setObjectName(QString::fromUtf8("no8Score"));
        no8Score->setMinimumSize(QSize(71, 31));
        no8Score->setMaximumSize(QSize(71, 31));
        no8Score->setReadOnly(true);

        horizontalLayout_8->addWidget(no8Score);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(HighScoreWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(67, 21));
        label_9->setMaximumSize(QSize(67, 21));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_9);

        no9Name = new QTextEdit(HighScoreWidget);
        no9Name->setObjectName(QString::fromUtf8("no9Name"));
        no9Name->setMinimumSize(QSize(71, 31));
        no9Name->setMaximumSize(QSize(71, 31));
        no9Name->setReadOnly(true);

        horizontalLayout_9->addWidget(no9Name);

        no9Level = new QTextEdit(HighScoreWidget);
        no9Level->setObjectName(QString::fromUtf8("no9Level"));
        no9Level->setMinimumSize(QSize(71, 31));
        no9Level->setMaximumSize(QSize(71, 31));
        no9Level->setReadOnly(true);

        horizontalLayout_9->addWidget(no9Level);

        no9Score = new QTextEdit(HighScoreWidget);
        no9Score->setObjectName(QString::fromUtf8("no9Score"));
        no9Score->setMinimumSize(QSize(71, 31));
        no9Score->setMaximumSize(QSize(71, 31));
        no9Score->setReadOnly(true);

        horizontalLayout_9->addWidget(no9Score);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(HighScoreWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(67, 21));
        label_10->setMaximumSize(QSize(67, 21));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        no10Name = new QTextEdit(HighScoreWidget);
        no10Name->setObjectName(QString::fromUtf8("no10Name"));
        no10Name->setMinimumSize(QSize(71, 31));
        no10Name->setMaximumSize(QSize(71, 31));
        no10Name->setReadOnly(true);

        horizontalLayout_10->addWidget(no10Name);

        no10Level = new QTextEdit(HighScoreWidget);
        no10Level->setObjectName(QString::fromUtf8("no10Level"));
        no10Level->setMinimumSize(QSize(71, 31));
        no10Level->setMaximumSize(QSize(71, 31));
        no10Level->setReadOnly(true);

        horizontalLayout_10->addWidget(no10Level);

        no10Score = new QTextEdit(HighScoreWidget);
        no10Score->setObjectName(QString::fromUtf8("no10Score"));
        no10Score->setMinimumSize(QSize(71, 31));
        no10Score->setMaximumSize(QSize(71, 31));
        no10Score->setReadOnly(true);

        horizontalLayout_10->addWidget(no10Score);


        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(132, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        title = new QLabel(HighScoreWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaximumSize(QSize(78, 17));

        gridLayout->addWidget(title, 0, 1, 1, 1);


        retranslateUi(HighScoreWidget);
        QObject::connect(pushButton, SIGNAL(pressed()), HighScoreWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(HighScoreWidget);
    } // setupUi

    void retranslateUi(QWidget *HighScoreWidget)
    {
        HighScoreWidget->setWindowTitle(QApplication::translate("HighScoreWidget", "High Scores", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("HighScoreWidget", "Ok", 0, QApplication::UnicodeUTF8));
        rank->setText(QApplication::translate("HighScoreWidget", "Rank", 0, QApplication::UnicodeUTF8));
        name->setText(QApplication::translate("HighScoreWidget", "Name", 0, QApplication::UnicodeUTF8));
        level->setText(QApplication::translate("HighScoreWidget", "Level", 0, QApplication::UnicodeUTF8));
        score->setText(QApplication::translate("HighScoreWidget", "Score", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("HighScoreWidget", "#1", 0, QApplication::UnicodeUTF8));
        no1Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HighScoreWidget", "#2", 0, QApplication::UnicodeUTF8));
        no2Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HighScoreWidget", "#3", 0, QApplication::UnicodeUTF8));
        no3Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("HighScoreWidget", "#4", 0, QApplication::UnicodeUTF8));
        no4Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("HighScoreWidget", "#5", 0, QApplication::UnicodeUTF8));
        no5Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("HighScoreWidget", "#6", 0, QApplication::UnicodeUTF8));
        no6Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("HighScoreWidget", "#7", 0, QApplication::UnicodeUTF8));
        no7Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("HighScoreWidget", "#8", 0, QApplication::UnicodeUTF8));
        no8Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("HighScoreWidget", "#9", 0, QApplication::UnicodeUTF8));
        no9Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("HighScoreWidget", "#10", 0, QApplication::UnicodeUTF8));
        no10Name->setHtml(QApplication::translate("HighScoreWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("HighScoreWidget", "High Scores", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HighScoreWidget: public Ui_HighScoreWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCOREWIDGET_H
