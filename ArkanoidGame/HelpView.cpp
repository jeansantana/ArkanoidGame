#include "HelpView.h"
#include "Texture.h"

HelpView::HelpView(QWidget *parent) :
    QGLWidget(parent)
{

}

void HelpView::initializeGL() {
    image = Texture::newImage("images/help.png");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D((double) 0,(double) this->width()/2, (double)0, (double) this->height()/2);//clipping window
    glViewport(0, this->width(), 0, this->height());
}

void HelpView::resizeGL(int width, int height) {
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

void HelpView::paintGL() {

    glClear(GL_COLOR_BUFFER_BIT);//repinta a tela
    glViewport(0, 0, width(), height());
    glLoadIdentity();

    glPushMatrix();
        //glTranslatef(bar->getPosicao().getX(), bar->getPosicao().getY() + bar->getAltura()/2, 0);
        //textura
        Texture::Carregar(image);
        Texture::draw(image, 3, 2);
        //textura
    glPopMatrix();
}
