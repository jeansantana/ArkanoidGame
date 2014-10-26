#include "ArkanoidView.h"
#include <iostream>
#include <QTimer>
#include <cmath>
#include "Utils.h"
#include <QInputDialog>

using namespace std;

ArkanoidView::ArkanoidView(QWidget *parent) :
    QGLWidget(parent)
{
    game = Game(1, 1, 15);
    hs = new HighScoreWidget();
    hs->loadScore();
    setFormat(QGL::DoubleBuffer | QGL::DepthBuffer);//????
    setFocusPolicy(Qt::StrongFocus);//direciona o foco do teclado para o widget. Para aceitar as teclas
    installEventFilter(this);//intsla o Filtro de Eventos para esse objeto.
    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(moveUpdate()));
    time->start(5);
}

void ArkanoidView::moveUpdate() {//moveUpdate()
    Vetor v;
    if (game.statusGame == PLAY) {

        double ballX =  game.ball.getPosicao().getX();
        double ballY = game.ball.getPosicao().getY();
        double ballR = game.ball.getR() + 0.01;
        Vetor vBall = Vetor(game.ball.getVelocidade().getX(), game.ball.getVelocidade().getY());
        double barX = game.bar.getPosicao().getX();
        double barY = game.bar.getPosicao().getY();
        double barComprimento = game.bar.getComprimento();
        double barAltura = game.bar.getAltura();
        //colisao com as paredes laterais
        if (ballX + ballR >= 1.0 || ballX - ballR  <= -1.0) {

            game.ball.setVelocidade(-vBall.getX(), vBall.getY());

        //colisao com as paredes superior e inferior
        } else if (ballY + ballR >= 0.8) {

            game.ball.setVelocidade(vBall.getX(), -vBall.getY());

        } else if(ballY - ballR <= -0.9) {
            game.reset();
        } else if (ballY - barAltura/2 - ballR <= barY + barAltura/2 && // teste coliscao na linha da barra.
                   ballX >= barX - barComprimento/2 && //teste a bola está do entre o lado esquerdo e direito da barra respectivamente
                   ballX <= barX + barComprimento/2) {

            if (ballX <= barX - barComprimento/2 + barComprimento/5) {

                v = Vetor(cos(PI - PI/6), sin((PI - PI/6)));

            } else if (ballX <= barX - barComprimento/2 + 2*barComprimento/5) {

                v = Vetor(cos(PI - PI/4), sin((PI - PI/4)));

            } else if (ballX <= barX - barComprimento/2 + 3*barComprimento/5) {

                v = Vetor(0, sin((PI/2)));

            } else if (ballX <= barX - barComprimento/2 + 4*barComprimento/5) {

                v = Vetor(-cos(PI - PI/4), sin((PI - PI/4)));

            } else if (ballX <= barX + barComprimento/2) {

                v = Vetor(cos(PI/6), sin((PI - PI/6)));

            }

            v = v * game.ball.getVelocidade().getNorma();
            v.getNorma();
            game.ball.setVelocidade(v);
        }

        for (int i = 0; i < game.levels.getNLinhas(); i++) {
            for (int j = 0; j < game.levels.getNColunas(); j++) {
                if(game.levels.bricks[i][j].isEnable()) {
                    int colision = game.levels.bricks[i][j].colidiu(&game.ball);
                    if(colision >= 0) {
                        if (colision == 0) {
                            game.levels.nBricksDown();
                            game.score+= 50;
                            game.levels.bricks[i][j].powerUp.ativado = true;
                            //
                            if (game.ball.getTipo() == 1 || game.ball.getTipo() == 3) {

                                if (j == 0) {

                                    //teste com o bloco acima e a esquerda
                                    queimaBloco(i - 1, j + 2);
                                    //teste com o bloco acima e a diretira
                                    queimaBloco(i - 1, j + 1);
                                    //teste com o bloco acima
                                    queimaBloco(i - 1, j);

                                    //teste com o bloco abaixo e a esquerda
                                    queimaBloco(i + 1, j + 2);
                                    //teste com o bloco abaixo e a diretira
                                    queimaBloco(i + 1, j + 1);
                                    //teste com o bloco abaixo
                                    queimaBloco(i + 1, j);

                                    queimaBloco(i, j + 2);
                                    queimaBloco(i, j + 1);


                                } else if (j == 1) {

                                    //teste com o bloco acima e a esquerda
                                    queimaBloco(i - 1, j - 1);
                                    //teste com o bloco acima e a diretira
                                    queimaBloco(i - 1, j + 2);
                                    //teste com o bloco acima
                                    queimaBloco(i - 1, j);

                                    //teste com o bloco abaixo e a esquerda
                                    queimaBloco(i + 1, j - 1);
                                    //teste com o bloco abaixo e a diretira
                                    queimaBloco(i + 1, j + 2);
                                    //teste com o bloco abaixo
                                    queimaBloco(i + 1, j);


                                    queimaBloco(i, j - 1);
                                    queimaBloco(i, j + 2);

                                }else if(j % 2 == 0) {

                                    //teste com o bloco acima e a esquerda
                                    queimaBloco(i - 1, j + 2);
                                    //teste com o bloco acima e a diretira
                                    queimaBloco(i - 1, j - 2);
                                    //teste com o bloco acima
                                    queimaBloco(i - 1, j);

                                    //teste com o bloco abaixo e a esquerda
                                    queimaBloco(i + 1, j + 2);
                                    //teste com o bloco abaixo e a diretira
                                    queimaBloco(i + 1, j - 2);
                                    //teste com o bloco abaixo
                                    queimaBloco(i + 1, j);

                                    queimaBloco(i, j + 2);
                                    queimaBloco(i, j - 2);

                                } else if (j % 2 == 1) {

                                    //teste com o bloco acima e a esquerda
                                    queimaBloco(i - 1, j - 2);
                                    //teste com o bloco acima e a diretira
                                    queimaBloco(i - 1, j + 2);
                                    //teste com o bloco acima
                                    queimaBloco(i - 1, j);

                                    //teste com o bloco abaixo e a esquerda
                                    queimaBloco(i + 1, j - 2);
                                    //teste com o bloco abaixo e a diretira
                                    queimaBloco(i + 1, j + 2);
                                    //teste com o bloco abaixo
                                    queimaBloco(i + 1, j);

                                    queimaBloco(i, j - 2);
                                    queimaBloco(i, j + 2);

                                }


                            }
                            //
                        } else if (colision == 1) {
                            game.score+=50;
                        }
                        if (game.levels.getNBricks() == 0) {
                            game.passarFase();
                        }
                    }
                } else {
                    if (game.levels.bricks[i][j].powerUp.ativado) {
                        game.levels.bricks[i][j].powerUp.posicao.setY(game.levels.bricks[i][j].powerUp.posicao.getY() - 0.01);
                        int tp = game.levels.bricks[i][j].powerUp.colidiu(game.bar);
                        if (tp > 0 || game.levels.bricks[i][j].powerUp.posicao.getY() < -0.95) {
                            game.levels.bricks[i][j].powerUp.ativado = false;

                            if (tp == PONTOEXTRA1) {
                                game.score+= 100;
                            } else if (tp == PONTOEXTRA2) {
                                game.score+= 200;
                            } else if (tp == AUMENTO) {
                                game.bar.setComprimento(0.4);//25% maior de 0.32 (Normal)
                            } else if (tp == DMINUS) {
                                game.bar.setComprimento(0.24);//25% menor de 0.32 (Normal)
                            } else if (tp == VIDA) {
                                //jogador não poderá ter mais de 5 vidas.
                                if (game.life < 5)
                                    game.life++;
                            } else if (tp == FERRO) {
                                if (game.ball.getTipo() == 1 || game.ball.getTipo() == 3) {
                                    game.ball.setTipo(3);
                                } else {
                                    game.ball.setTipo(2);
                                }
                            } else if (tp == FOGO) {
                                if (game.ball.getTipo() == 2 || game.ball.getTipo() == 3) {
                                    game.ball.setTipo(3);
                                } else {
                                    game.ball.setTipo(1);
                                }
                            }
                        }
                    }
                }
            }
        }

        game.ball.setPosicao(game.ball.getPosicao() + game.ball.getVelocidade()*0.1);

    }
    //move a barra
    if (game.statusGame == PLAY || game.statusGame == STOP) {
        double x = game.bar.getPosicao().getX();
        double l = game.bar.getComprimento()/2.0;
        if (game.keyPressed == RIGHT && x < 1 - l) {
            game.bar.setPosicao(x + 0.02, game.bar.getPosicao().getY());
        } else if (game.keyPressed == LEFT && x > -1 + l) {
            game.bar.setPosicao(x - 0.02, game.bar.getPosicao().getY());
        }
    }

    if (game.statusGame == STOP) {
        game.ball.setPosicao(game.bar.getPosicao().getX(), game.ball.getPosicao().getY());
    }

    if (game.life == 0) {
        game.statusGame = GAMEOVER;
    }

    updateGL();
}

void ArkanoidView::initializeGL() {
    imageBall = Texture::newImage("images/ball.png");
    imageBar = Texture::newImage("images/bar.png");
    imageWall = Texture::newImage("images/fixo.png");
    imageBNormal = Texture::newImage("images/normal.png");
    imageBPlus = Texture::newImage("images/plus.png");
    imageBack = Texture::newImage("images/back.png");

    imagePt1 = Texture::newImage("images/ponto100.png");
    imagePt2 = Texture::newImage("images/ponto200.png");
    imageAumento = Texture::newImage("images/aumenta.png");
    imageDminus = Texture::newImage("images/diminui.png");
    imageVida = Texture::newImage("images/vida.png");
    imageBFerro = Texture::newImage("images/ferro.png");
    imageBFogo = Texture::newImage("images/fogo.png");

    imageBallFerro = Texture::newImage("images/ballferro.png");
    imageBallFogo = Texture::newImage("images/ballfogo.png");
    imageBallFeFo = Texture::newImage("images/ballfefo.png");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D((double) 0,(double) this->width()/2, (double)0, (double) this->height()/2);//clipping window
    glViewport(0, this->width(), 0, this->height());
}

void ArkanoidView::resizeGL(int width, int height) {
    double menorX = -1, maiorX = 1, menorY = -1, maiorY = 1;
        // Especifica as dimensões da Viewport

        // Inicializa o sistema de coordenadas
        glMatrixMode(GL_PROJECTION); //modificações afetarão a câmera
        glLoadIdentity();
        //define os limites do sistema de coordenadas
        gluOrtho2D(-1,1,-1,1);
        if (width > height) {
            height = height?height:1;
            double novaLargura = (maiorX - menorX) * width / height;
            double difLargura = novaLargura - (maiorX - menorX);
            menorX = -1 - difLargura / 2.0;
            maiorX = 1 + difLargura / 2.0;
        }
        else
        {
            width = width?width:1;
            double novaAltura = (maiorY - menorY) * height / width;
            double difAltura = novaAltura - (maiorY - menorY);
            menorY = -1 - difAltura / 2.0;
            maiorY = 1 + difAltura / 2.0;
        }

        gluOrtho2D(menorX, maiorX, menorY, maiorY);
        glMatrixMode(GL_MODELVIEW); //modificações afetarão os modelos da cena
        glLoadIdentity();
}

void ArkanoidView::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);//repinta a tela
    glViewport(0, 0, width(), height());
    glLoadIdentity();



    glPushMatrix();
        //glTranslatef(bar->getPosicao().getX(), bar->getPosicao().getY() + bar->getAltura()/2, 0);
        //textura
        Texture::Carregar(imageBack);
        Texture::draw(imageBack, 3, 2);
        //textura
    glPopMatrix();

    glPushMatrix();
        glTranslatef(game.bar.getPosicao().getX(), game.bar.getPosicao().getY() + game.bar.getAltura()/2, 0);
        //textura
        Texture::Carregar(imageBar);
        Texture::draw(imageBar, game.bar.getComprimento(), game.bar.getAltura());
        //textura

        //bar->desenha();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(game.ball.getPosicao().getX(), game.ball.getPosicao().getY(), 0.0);
        //glColor3f(1, 1, 0);
        //textura
        if (game.ball.getTipo() == 1) {
            Texture::Carregar(imageBallFogo);
            Texture::draw(imageBallFogo, game.ball.getR()*2, game.ball.getR()*2);
        } else if (game.ball.getTipo() == 2) {
            Texture::Carregar(imageBallFerro);
            Texture::draw(imageBallFerro, game.ball.getR()*2, game.ball.getR()*2);
        } else if (game.ball.getTipo() == 3) {
            Texture::Carregar(imageBallFeFo);
            Texture::draw(imageBallFeFo, game.ball.getR()*2, game.ball.getR()*2);
        } else {
            Texture::Carregar(imageBall);
            Texture::draw(imageBall, game.ball.getR()*2, game.ball.getR()*2);
        }
        //textura
    glPopMatrix();
    for (int i = 0; i < game.levels.getNLinhas(); i++) {
        for (int j = 0; j < game.levels.getNColunas(); j++) {
            if (game.levels.bricks[i][j].isEnable()) {
                glPushMatrix();
                    glTranslatef(game.levels.bricks[i][j].getPosicao().getX(), game.levels.bricks[i][j].getPosicao().getY(), 0);
                    if(game.levels.bricks[i][j].getTipo() == TFIXO) Texture::Carregar(imageWall);
                    else if(game.levels.bricks[i][j].getTipo() == TNORMAL) Texture::Carregar(imageBNormal);
                    else Texture::Carregar(imageBPlus);
                    Texture::draw(imageWall, game.levels.bricks[i][j].getComprimento(), game.levels.bricks[i][j].getAltura());
                glPopMatrix();
                //levels->bricks[i][j].desenha();
            } else {
                if (game.levels.bricks[i][j].powerUp.ativado) {
                    glPushMatrix();
                        glTranslatef(game.levels.bricks[i][j].powerUp.posicao.getX(), game.levels.bricks[i][j].powerUp.posicao.getY(), 0);
                        int tp = game.levels.bricks[i][j].powerUp.tipo;
                        if (tp == PONTOEXTRA1) {
                            Texture::Carregar(imagePt1);
                            Texture::draw(imagePt1, 0.08, 0.08);
                        } else if (tp == PONTOEXTRA2) {
                            Texture::Carregar(imagePt2);
                            Texture::draw(imagePt2, 0.08, 0.08);
                        } else if (tp == AUMENTO) {
                            Texture::Carregar(imageAumento);
                            Texture::draw(imageAumento, 0.08, 0.08);
                        } else if (tp == DMINUS) {
                            Texture::Carregar(imageDminus);
                            Texture::draw(imageDminus, 0.08, 0.08);
                        } else if (tp == VIDA) {
                            Texture::Carregar(imageVida);
                            Texture::draw(imageVida, 0.08, 0.08);
                        } else if (tp == FERRO) {
                            Texture::Carregar(imageBFerro);
                            Texture::draw(imageBFerro, 0.08, 0.08);
                        } else if (tp == FOGO) {
                            Texture::Carregar(imageBFogo);
                            Texture::draw(imageBFogo, 0.08, 0.08);
                        }

                    glPopMatrix();
                }
            }
        }
    }

    QFont myFont("Helvetica", 18);
    string pt = "Score " + Utils::intToString(game.score);
    renderText(-1, 0.88, 0, pt.c_str() , myFont);
    pt = "Fase " + Utils::intToString(game.faseAtual);
    renderText(-0.1, 0.88, 0, pt.c_str(), myFont);
    pt = "Vidas " + Utils::intToString(game.life);
    renderText(0.7, 0.88, 0, pt.c_str(), myFont);

    glPushMatrix();
        //desenha acima
        Scene::desenha();
    glPopMatrix();

    //desenhaTijolo(0.01, 0.01, levels->getCell(0, 0).getPosicao().getX(), levels->getCell(0, 0).getPosicao().getY());
    //desenhaTijolo(0.01, 0.01, levels->getCell(7, 13).getPosicao().getX(), levels->getCell(7, 13).getPosicao().getY());

    if (game.statusGame == STOP && game.life > 0) {
        glColor3f(1.0, 1.0, 1.0);
        QFont myFont("Helvetica", 30);
        string str = "FASE " + Utils::intToString(game.faseAtual) + "!" ;
        renderText(-0.2, -0.3, 0.0, str.c_str(), myFont);
    }

    if (game.statusGame == PAUSE) {
        glColor3f(1.0, 1.0, 1.0);
        QFont myFont("Helvetica", 30);
        renderText(-0.4, -0.3, 0.0, "Jogo PARADO!", myFont);
    }

    if (game.statusGame == GAMEOVER) {
        glColor3f(1.0, 1.0, 1.0);
        QFont myFont("Helvetica", 30);
        renderText(-0.4, -0.3, 0.0, "GAME OVER!", myFont);
    }

    if (game.statusGame == WIN) {
        glColor3f(1.0, 1.0, 1.0);
        QFont myFont("Helvetica", 30);
        renderText(-0.4, -0.3, 0.0, "VOCE GANHOU!!!", myFont);
    }

    glFlush();
}

bool ArkanoidView::eventFilter (QObject* obj, QEvent* e) {
    QKeyEvent *k = (QKeyEvent*)e;
    if (e->type() == QEvent::KeyPress) {
        if (k->key() == Qt::Key_Escape || k->key() == Qt::Key_P) {
            if(game.statusGame == PLAY) {
                game.statusGame = PAUSE;
            } else if (game.statusGame == PAUSE) {
                game.statusGame = PLAY;
            }
        } else if (k->key() == Qt::Key_Left) {
            game.keyPressed = LEFT;
        } else if (k->key() == Qt::Key_Right) {
            game.keyPressed = RIGHT;
        } else if (k->key() == Qt::Key_Space) {
            if (game.statusGame == GAMEOVER || game.statusGame == WIN) {
                bool ok;
                QString s = QInputDialog::getText(this, "Rank", "Nome: ", QLineEdit::Normal, "",&ok);

                if (ok) {
                    score a;
                    a.name = s.toStdString();
                    if (game.faseAtual == 6) a.level = 5;
                    else a.level = game.faseAtual;
                    a.points = game.score;
                    hs->saveScore(a);
                    hs->loadScore();
                    hs->show();
                }
                game.inicia(1, 1, 15);
                game.life = 3;
                game.score = 0;
                game.statusGame = STOP;
            } else {
                game.statusGame = PLAY;
            }
        } else if (k->key() == Qt::Key_Q) {
            window()->close();
            if (hs != NULL) hs->close();
            if (help != NULL) help->close();
            if (about != NULL) about->close();
        } else if (k->key() == Qt::Key_R) {
            game.reset();
            game.life++;
        }
    } else if (e->type() == QEvent::KeyRelease) {

        if (k->key() == Qt::Key_Left && game.keyPressed == LEFT) {
            game.keyPressed = PARADO;
        } else if (k->key() == Qt::Key_Right && game.keyPressed == RIGHT) {
            game.keyPressed = PARADO;
        }
    }

    return QObject::eventFilter(obj, e);//retorna o evento
}

void ArkanoidView::queimaBloco(int i, int j) {
    if (i >=0 && i < game.levels.getNLinhas() && j >= 0 && j < game.levels.getNColunas()) {
        if (game.levels.bricks[i][j].getTipo() != TFIXO && game.levels.bricks[i][j].isEnable()) {
            if (game.levels.bricks[i][j].getTipo() == TPLUS) {
                game.levels.bricks[i][j].setTipo(TNORMAL);
                game.score+=50;
            } else {
                game.levels.bricks[i][j].setEnable(false);
                game.levels.nBricksDown();
                game.score+=50;
            }
        }
    }
}
