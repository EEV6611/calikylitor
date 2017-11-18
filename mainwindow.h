#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_q1_clicked();

    void on_q2_clicked();

    void on_q3_clicked();

    void on_q4_clicked();

    void on_q5_clicked();

    void on_q6_clicked();

    void on_q7_clicked();

    void on_q8_clicked();

    void on_q9_clicked();

    void on_q0_clicked();

    void on_z_clicked();

    void on_pl_clicked();

    void on_mi_clicked();

    void on_x_clicked();

    void on_del_clicked();

    void on_ravno_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
