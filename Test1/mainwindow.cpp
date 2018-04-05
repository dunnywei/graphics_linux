#include <GL/glew.h>
#include <GL/gl.h>


#include <QtOpenGL/QGLWidget>

#include "mainwindow.h"

/*
MeGlwindow::MeGlwindow(QWidget *parent) :QGLWidget(parent,shareWidget,NULL)
{
    //const QGLWidget * shareWidget = 0, Qt::WindowFlags f = 0)
    //swapBuffers();


}
*/

void MeGlwindow::initalizaeGL()
{

        glewInit();

    GLfloat verts[] =
    {
        +0.0f, +0.0f,
        +1.0f, +1.0f,
        -1.0f, +1.0f,
        -1.0f, -1.0f,
        +1.0f, -1.0f,
    };
    GLuint myBufferID;
    glGenBuffers(1, &myBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, myBufferID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts),
        verts, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

    GLushort indices[] = { 3,1,2, 0,3,4 };
    GLuint indexBufferID;
    glGenBuffers(1, &indexBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices),
        indices, GL_STATIC_DRAW);




}
void MeGlwindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glViewport(0, 0, width(), height());
    //glDrawArrays(GL_TRIANGLES, 0, 6);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, (void*) 0);

    //end of adding
}

void MeGlwindow::resizeGL(int w, int h)
{
    //QGLWidget::resizeGL(w,h);
}
