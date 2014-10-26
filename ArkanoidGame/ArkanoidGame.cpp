#include "ArkanoidGame.h"
#include "ui_arkanoidgame.h"
#include "ArkanoidView.h"
ArkanoidGame::ArkanoidGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ArkanoidGame)
{
    ui->setupUi(this);

}

ArkanoidGame::~ArkanoidGame()
{
    delete ui;
}

void ArkanoidGame::on_actionQuit_triggered()
{
    window()->close();
}

void ArkanoidGame::on_actionHigh_Scores_triggered() {
    ui->widget->hs->show();
}

void ArkanoidGame::on_actionNovo_jogo_triggered() {
    ui->widget->ArkanoidView::game.inicia(1, 1, 15);
}

void ArkanoidGame::on_actionAbout_triggered()
{
    ui->widget->about = new About();
    ui->widget->about->show();
}

void ArkanoidGame::on_actionInstru_es_triggered()
{
    ui->widget->help = new Help();
    ui->widget->help->show();
}
