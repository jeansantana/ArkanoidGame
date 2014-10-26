#include "HighScoreWidget.h"
#include "ui_highscorewidget.h"
#include <QFile>
#include <QTextStream>
#include <sstream>
#include "Utils.h"
#include <iostream>
#include <pwd.h>

HighScoreWidget::HighScoreWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HighScoreWidget)
{
    ui->setupUi(this);
}

HighScoreWidget::~HighScoreWidget()
{
    delete ui;
}

void HighScoreWidget::saveScore(score a) {
    scores.push_back(a);

    /*struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;
    stringstream ss;
    ss << homedir;*/
    string dirFile = "../ArkanoidGame/scores";
    QFile file(dirFile.c_str());

    QTextStream out(&file);
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        out << a.name.c_str() << endl;
        out << a.level << endl;
        out << a.points << endl;
    } else {
        cout << "Arquivo não encontrado!\n";
    }
    file.close();
}

bool compare(score a, score b) {
    return a.points == b.points ? (a.level == b.level ? a.name < b.name : a.level > b.level) : a.points > b.points;
}

void HighScoreWidget::loadScore() {
    scores.clear();
    /*struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;
    stringstream ss;
    ss << homedir;*/
    string dirFile = "../ArkanoidGame/scores";
    QFile file(dirFile.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        QTextStream in(&file);
        QString line;
        score a;
        while (!in.atEnd()) {
            if (!in.atEnd()) {
                line = in.readLine();
                a.name = line.toStdString();
                a.level = Utils::stringToInt(in.readLine().toStdString());
                a.points = Utils::stringToInt(in.readLine().toStdString());
                scores.push_back(a);
            }
        }
        file.close();

        sort(scores.begin(), scores.end(), compare);

        score v[10];

        int i = 0;

        for (i = 0; i < scores.size() && i < 10; i++) {
            if(scores.size() > i)
            {
                v[i] = scores[i];
            }
        }

        for (int j = i; j < 10; j++) {
            v[j].name = "";
            v[j].level = 0;
            v[j].points = 0;
        }

        ui->no1Name->setPlainText(v[0].name.c_str());
        ui->no1Level->setPlainText(Utils::intToString(v[0].level).c_str());
        ui->no1Score->setPlainText(Utils::intToString(v[0].points).c_str());

        ui->no2Name->setPlainText(v[1].name.c_str());
        ui->no2Level->setPlainText(Utils::intToString(v[1].level).c_str());
        ui->no2Score->setPlainText(Utils::intToString(v[1].points).c_str());

        ui->no3Name->setPlainText(v[2].name.c_str());
        ui->no3Level->setPlainText(Utils::intToString(v[2].level).c_str());
        ui->no3Score->setPlainText(Utils::intToString(v[2].points).c_str());

        ui->no4Name->setPlainText(v[3].name.c_str());
        ui->no4Level->setPlainText(Utils::intToString(v[3].level).c_str());
        ui->no4Score->setPlainText(Utils::intToString(v[3].points).c_str());

        ui->no5Name->setPlainText(v[4].name.c_str());
        ui->no5Level->setPlainText(Utils::intToString(v[4].level).c_str());
        ui->no5Score->setPlainText(Utils::intToString(v[4].points).c_str());

        ui->no6Name->setPlainText(v[5].name.c_str());
        ui->no6Level->setPlainText(Utils::intToString(v[5].level).c_str());
        ui->no6Score->setPlainText(Utils::intToString(v[5].points).c_str());

        ui->no7Name->setPlainText(v[6].name.c_str());
        ui->no7Level->setPlainText(Utils::intToString(v[6].level).c_str());
        ui->no7Score->setPlainText(Utils::intToString(v[6].points).c_str());

        ui->no8Name->setPlainText(v[7].name.c_str());
        ui->no8Level->setPlainText(Utils::intToString(v[7].level).c_str());
        ui->no8Score->setPlainText(Utils::intToString(v[7].points).c_str());

        ui->no9Name->setPlainText(v[8].name.c_str());
        ui->no9Level->setPlainText(Utils::intToString(v[8].level).c_str());
        ui->no9Score->setPlainText(Utils::intToString(v[8].points).c_str());

        ui->no10Name->setPlainText(v[9].name.c_str());
        ui->no10Level->setPlainText(Utils::intToString(v[9].level).c_str());
        ui->no10Score->setPlainText(Utils::intToString(v[9].points).c_str());



    } else {
        cout << "Arquivo não encontrado\n";
    }
}

