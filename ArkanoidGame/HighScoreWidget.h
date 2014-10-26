#ifndef HIGHSCOREWIDGET_H
#define HIGHSCOREWIDGET_H

#include <QWidget>
#include <vector>

using namespace std;

/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe HighScoreWidget gerencia as pontuações do jogo manipulando arquivos.
 *
 *
 */

/**
  * @struct score para facilitar a manipulação da pontuação do jogador
  */
struct score {
    string name;
    int level;
    int points;
};

namespace Ui {
class HighScoreWidget;
}

class HighScoreWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HighScoreWidget(QWidget *parent = 0);
    ~HighScoreWidget();
    /**
      * Faz uma leitura de arquivo e carrega as 10 primeiras melhores pontuações
      *
      */
    void loadScore();
    /**
      * Salva a pontualção do jogador 'a' quando ele perde ou ganha
      * @param score 'a' de uma jogador
      */
    void saveScore(score a);

private:
    Ui::HighScoreWidget *ui;
    vector<score> scores;
};

#endif // HIGHSCOREWIDGET_H
