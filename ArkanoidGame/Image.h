#ifndef IMAGE_H
#define IMAGE_H

#include <GL/gl.h>
#include <GL/glu.h>

#include <QGLWidget>
/** @file
 * @author  Jean Silva <jeangleison2@gmail.com>, Caio Santos <caio-cesar-ms@hotmail.com>
 *
 * @section DESCRIPTION
 *
 * A classe Image define uma Imagem
 *
 *
 */
class Image {
public:
    Image();
    QImage i, igl;
    GLuint texture;
};

#endif // IMAGE_H
