#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_choose_clicked(bool checked);

    void on_btn_lock_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    int comboIndex;
};
#endif // MAINWINDOW_H
