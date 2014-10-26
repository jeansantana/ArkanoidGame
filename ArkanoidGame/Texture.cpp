#include "Texture.h"

#include "Texture.h"

Texture::Texture()
{
}



Image Texture::newImage(string caminho){

    Image im;

    if( !im.i.load(caminho.c_str()) ){
        cout<<"Erro!"<<endl;
        im.i = QImage( 16,16, QImage::Format_RGB888 );
        im.i.fill (QColor(Qt::green).rgb() );
    }

    im.igl = QGLWidget::convertToGLFormat( im.i );

    glGenTextures(1, &im.texture);

    return im;
}

void Texture::Carregar(Image &im){

    glBindTexture(GL_TEXTURE_2D, im.texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, im.igl.width(), im.igl.height(), 0, GL_RGBA, GL_UNSIGNED_BYTE, im.igl.bits());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

}

void Texture::draw(Image &im, double largura,double altura){

    glEnable(GL_BLEND);
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glDisable(GL_TEXTURE_1D);
    glEnable(GL_TEXTURE_2D);

    glBegin(GL_QUADS);
       glTexCoord2f(0.0f,0.0f); glVertex3f(-largura/2, -altura/2, 0.0);
       glTexCoord2f(1.0f,0.0f); glVertex3f(largura/2, -altura/2, 0.0);
       glTexCoord2f(1.0f,1.0f); glVertex3f(largura/2, altura/2, 0.0);
       glTexCoord2f(0.0f,1.0f); glVertex3f(-largura/2, altura/2, 0.0);
    glEnd();

    glDisable(GL_TEXTURE_2D);
    glEnable(GL_TEXTURE_1D);
    glDisable(GL_BLEND);
}
