#include "Level.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Utils.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <pwd.h>
#include <cstring>
#include <iostream>
#include <sys/types.h>

using namespace std;

#define MAXLIN 8
#define MAXCOL 15

Level::Level() {

}

Level::Level(int level, int m, int n) {
    nBricks = 0;
    linhas = m;
    colunas = n;
    buildMatrix(level, m, n);
}

int Level::getNLinhas() {
    return linhas;
}

int Level::getNColunas() {
    return colunas;
}

void Level::nBricksDown() {
    nBricks--;
}

int Level::getNBricks() {
    return nBricks;
}

void Level::loadLevel(int level, int m, int n) {
    //get user name
    /*struct passwd *pw = getpwuid(getuid());
    const char *homedir = pw->pw_dir;
    stringstream ss;
    ss << homedir;*/
    double altura, comprimento;
    bool enable;
    int cond;
    int tipo;
    //string dirFile = ss.str()+"/QtProjects/ArkanoidGame/fases/level"+Utils::intToString(level);
    string dirFile = "../ArkanoidGame/fases/level"+Utils::intToString(level);

    QFile file(dirFile.c_str());

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

        QTextStream in(&file);
        QString line = in.readLine();
        stringstream s0;
        s0 << line.toStdString();
        nBricks = Utils::stringToInt(s0.str());
        if (!line.isNull()) {
            for (int k = 0; k < m; k++) {
                for (int j = 0; j < n; j++) {
                    line = in.readLine();
                    stringstream s;
                    s << line.toStdString();
                    s >> altura;
                    s >> comprimento;
                    s >> cond;
                    s >> tipo;
                    enable = cond == 0 ? false:true;
                    bricks[k][j] = Brick(0, 0, altura, comprimento, enable, tipo);//criar outro const. e colocar a função de random no utlils

                }
            }
        }
        file.close();

    } else {
        cout << "Arquivo não encontrado\n";
    }
}

Brick Level::getCell(int i, int j) {
    return bricks[i][j];
}

void Level::buildMatrix(int level, int m, int n) {

    loadLevel(level, m, n);

    double c = 0.12;
    double l = 0.08;
    double a = 0 + (7)*c;
    double b = 0.6 + (7)*(-l);

    vector < pair < double, double > > pontos;

    for (double j = 0.6; j > b; j-= l) {
        for (double i = 0.0; i <= a; i+= c) {//limites calculados como o termo geral de uma PA
            pair <double, double> ponto;
            ponto.first = i;
            ponto.second = j;
            pontos.push_back(ponto);
            if (i != 0) {
                ponto.first = -i;
                pontos.push_back(ponto);
            }
        }
    }
    for (int i = 0; i < MAXLIN; i++) {
        for (int j = 0; j < MAXCOL; j++) {
            bricks[i][j].setPosicao(Vetor(pontos[0].first, pontos[0].second));
            bricks[i][j].powerUp.posicao.setX(pontos[0].first);
            bricks[i][j].powerUp.posicao.setY(pontos[0].second);
            pontos.erase(pontos.begin());
        }
    }
}
