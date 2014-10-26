#ifndef TEXTURE_H
#define TEXTURE_H

#include <iostream>
#include <stdarg.h>
#include <cstring>
#include <GL/gl.h>
#include <GL/glu.h>
#include <QGLWidget>
#include "Image.h"

using namespace std;
/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Texture carrega e desenhar as texturas
 *
 *
 */
class Texture {
public:
    Texture();
    /**
     *Carrega a imagem do disco para a aplicação
     * @param caminho da imagem
     */
    static Image newImage(string caminho);//carrega uma nova imagem
    /**
     * Desenha a imagem
     * @param Image &im, largura e altura da imagem
     */
    static void draw(Image &im,double largura, double altura);//desenha a imagem
    /**
     * Carrega a imagem para ser usada na cena
     * @param Image &im
     */
    static void Carregar(Image &im);
};

#endif // TEXTURE_H
