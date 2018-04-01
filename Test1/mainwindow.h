#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MeGlwindow;
}

class MeGlwindow : public QMainWindow
{
    //Q_OBJECT

public:
    //explicit MeGlwindow(QWidget *parent = 0);
    MeGlwindow(QWidget *parent = 0);
    void initalizaeGL();
    void paintGL();
    void resizeGL(int,int);
    ~MeGlwindow(){};

private:
    Ui::MeGlwindow *ui;
};

#endif // MAINWINDOW_H
