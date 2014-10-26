#ifndef ARKANOIDGAME_H
#define ARKANOIDGAME_H

#include <QMainWindow>

namespace Ui {
class ArkanoidGame;
}

class ArkanoidGame : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ArkanoidGame(QWidget *parent = 0);
    ~ArkanoidGame();
    
private slots:
    void on_actionQuit_triggered();

    void on_actionHigh_Scores_triggered();

    void on_actionNovo_jogo_triggered();

    void on_actionAbout_triggered();

    void on_actionInstru_es_triggered();

private:
    Ui::ArkanoidGame *ui;

};

#endif // ARKANOIDGAME_H
