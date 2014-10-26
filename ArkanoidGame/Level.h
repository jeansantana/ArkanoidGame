#ifndef LEVEL_H
#define LEVEL_H

#include "Brick.h"

class Level
{
public:
    Level();
    Level(int level, int m, int n);
    void loadLevel(int level, int m, int n);
    Brick getCell(int i, int j);
    void buildMatrix(int level, int m, int n);
    int getNLinhas();
    int getNColunas();
    void nBricksDown();
    int getNBricks();
    Brick bricks[8][15];

private:

    int linhas;
    int colunas;
    int nBricks;
};

#endif // LEVEL_H
