#include "Game.h"

Game::Game() {

}

Game::Game(int level, int m, int n) {
    life = 3;
    inicia(level, m, n);
    score = 0;
}

void Game::inicia(int level, int m, int n) {
    faseAtual = level;
    keyPressed = PARADO;
    statusGame = STOP;
    levels = Level(level, m, n);
    bar = Bar(0.0, -0.89, 0.32, 0.06);
    ball = Ball(0, 0, 0.03, 0.15, 0.15);
    ball.setPosicao(0, bar.getPosicao().getY() + bar.getAltura() + ball.getR());
}

void Game::reset() {
    keyPressed = PARADO;
    statusGame = STOP;
    ball.setPosicao(0, bar.getPosicao().getY() + bar.getAltura() + ball.getR());
    ball.setTipo(0);
    bar.setComprimento(0.32);
    life--;
}

void Game::passarFase() {
    if (faseAtual <= 5) faseAtual++;
    if (faseAtual == 2) {
        levels = Level(faseAtual, 3, 15);
        inicia(faseAtual, 3, 15);
    } else if (faseAtual == 3) {
        levels = Level(faseAtual, 5, 15);
        inicia(faseAtual, 5, 15);
    } else if (faseAtual == 4) {
        inicia(faseAtual, 5, 15);
    } else if (faseAtual == 5) {
        inicia(faseAtual, 8, 15);
    } else if (faseAtual == 6) {
        statusGame = WIN;
    }
}
