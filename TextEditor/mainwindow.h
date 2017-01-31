#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void fileLoad();
    void fileSaveAs();
    void fileClose();

private slots:
    void on_btnOpen_clicked();

    void on_btnExit_clicked();

    void on_btnSaveAs_clicked();

    void on_btnClose_clicked();

private:
    Ui::MainWindow *ui;
private:
void mousePressEvent(QMouseEvent *event);
void mouseMoveEvent(QMouseEvent *event);
int m_nMouseClick_X_Coordinate;
int m_nMouseClick_Y_Coordinate;
};

#endif // MAINWINDOW_H
