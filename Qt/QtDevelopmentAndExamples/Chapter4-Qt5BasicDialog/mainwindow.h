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
    void on_btnFileDilog_clicked();

    void on_btnColorDialog_clicked();

    void on_btnFontDialog_clicked();

private:
    Ui::MainWindow *ui;


private:
    void InitLayout();

};
#endif // MAINWINDOW_H
