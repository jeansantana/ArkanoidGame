#ifndef ARKANOIDWIDGET_H
#define ARKANOIDWIDGET_H

#define WIDTH 10
#define HEIGHT 10

#include "Bar.h"
#include "Ball.h"
#include "Brick.h"
#include <QGLWidget>
#include <QKeyEvent>
#include <QEvent>
#include "Texture.h"
#include "Scene.h"
#include "Game.h"
#include "HighScoreWidget.h"
#include "About.h"
#include "Help.h"

class ArkanoidView : public QGLWidget
{
    Q_OBJECT
public:
    explicit ArkanoidView(QWidget *parent = 0);

    HighScoreWidget * hs;
    QTimer *time;
    About * about;
    Help * help;
    Game game;
    Image imageBall;
    Image imageBar;
    Image imageWall;
    Image imageBack;
    Image imageBNormal;
    Image imageBPlus;
    Image imagePt1;
    Image imagePt2;
    Image imageAumento;
    Image imageDminus;
    Image imageVida;
    Image imageBFerro;
    Image imageBFogo;

    Image imageBallFerro;
    Image imageBallFogo;
    Image imageBallFeFo;

private:

    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    bool eventFilter (QObject* obj, QEvent* e);
    void queimaBloco(int i, int j);

public slots:
    void moveUpdate();
};

#endif // ARKANOIDWIDGET_H
