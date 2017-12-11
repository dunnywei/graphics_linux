#include "oglwidget.h"

OGLWidget::OGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

OGLWidget::~OGLWidget()
{

}
void OGLWidget::initializeGL()
{
    /*
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
    */



    GLfloat verts[]=
    {
            +0.0f, +100.0f,
            -100.0f,-100.0f,
            +100.0f,-100.0f,
     };
     GLuint mybufferID;
     glGenBuffers(1, &mybufferID);
     glBindBuffer(GL_ARRAY_BUFFER, mybufferID);
     glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);

     glEnableVertexAttribArray(0);//first attribute
     glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
}





void OGLWidget::paintGL()
{
    /*
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(-0.5, -0.5, 0);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3f( 0.5, -0.5, 0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f( 0.0,  0.5, 0);
    glEnd();
    */


    QSize viewport_size = size();
    glViewport(0, 0, viewport_size.width(), viewport_size.height());

    glDrawArrays(GL_TRIANGLES, 0, 3);
}

void OGLWidget::resizeGL(int w, int h)
{

    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5,0,0,0,0,1,0);
}
