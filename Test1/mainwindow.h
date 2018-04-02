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
        setAutoBufferSwap(true);

    }
    
    ~MeGlwindow()
    {

    }
protected:
    void initalizaeGL();
    void paintGL();
    void resizeGL(int,int);

private:
    Ui::MeGlwindow *ui;
};

#endif // MAINWINDOW_H
