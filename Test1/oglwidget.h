#ifndef OGLWIDGET_H
#define OGLWIDGET_H
/*
#include <QWidget>
#include <QOpenGLWidget>

#include <GL/glu.h>>
#include <GL/gl.h>


class OGLWidget : public QOpenGLWidget
{
public:
    OGLWidget(QWidget *parent = 0);
    ~OGLWidget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};
*/

#include <QWidget>
#include <QOpenGLWidget>


#include <GL/gl.h>
#include <GL/glu.h>

class OGLWidget:public QOpenGLWidget
{
public:
    OGLWidget(QWidget *parent=0);
    ~OGLWidget();

protected:
    /*
    void intializeGL();
    void resizeGL(int w,int h);
    void paintGL();
    */
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();


};




#endif // OGLWIDGET_H
