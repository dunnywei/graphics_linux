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
		+0.0f, +1.0f,
		-1.0f, -1.0f,
		+1.0f, -1.0f,
	};
	GLuint myBufferID;
	glGenBuffers(1, &myBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, myBufferID);
	glBufferData(GL_ARRAY_BUFFER, sizeof(verts),verts, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);




}
void MeGlwindow::paintGL()
{
    //adding
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    QSize viewport_size = size();
    glViewport(0, 0, viewport_size.width(), viewport_size.height());

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1, 1, -1, 1, 5, 7); // near and far match your triangle Z distance

    glMatrixMode(GL_MODELVIEW);

    //glViewport(0, 0, width(), height());
	glDrawArrays(GL_TRIANGLES, 0, 3);
    //swapBuffers();

    //end of adding
}

void MeGlwindow::resizeGL(int w, int h)
{
    //QGLWidget::resizeGL(w,h);
}
