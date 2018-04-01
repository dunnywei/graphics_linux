#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtOpenGL/QGLWidget>

namespace Ui {
class MeGlwindow;
}

class MeGlwindow : public QGLWidget
{
    Q_OBJECT

public:
    //explicit MeGlwindow(QWidget *parent = 0);
    MeGlwindow(QWidget *parent):QGLWidget(parent)
    {

    }
    void initalizaeGL();
    void paintGL();
    void resizeGL(int,int);
    ~MeGlwindow()
    {

    }

private:
    Ui::MeGlwindow *ui;
};

#endif // MAINWINDOW_H
