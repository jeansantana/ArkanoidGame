#ifndef HELPVIEW_H
#define HELPVIEW_H

#include "Image.h"

#include <QWidget>

class HelpView : public QGLWidget
{
    Q_OBJECT
public:
    Image image;
    explicit HelpView(QWidget *parent = 0);
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
signals:
    
public slots:
    
};

#endif // HELPVIEW_H
