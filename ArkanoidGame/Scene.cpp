#include "Scene.h"
#include "Texture.h"

Scene::Scene()
{
}

void Scene::desenha() {
    glPushMatrix();
    glBegin(GL_LINE_LOOP);
        glColor3f(1, 1, 1);
        glVertex3f(-1, 0.8, 0);
        glVertex3f(1, 0.8, 0);
        glVertex3f(1, -0.9, 0);
        glVertex3f(-1, -0.9, 0);
    glEnd();
    glPopMatrix();
}
