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
    void on_spinBox_H_low_valueChanged(int arg1);

    void on_horizontalSlider_H_low_sliderMoved(int position);

    void on_spinBox_H_high_valueChanged(int arg1);

    void on_horizontalSlider_H_high_sliderMoved(int position);

    void on_spinBox_S_low_valueChanged(int arg1);

    void on_horizontalSlider_S_low_sliderMoved(int position);

    void on_spinBox_S_high_valueChanged(int arg1);

    void on_horizontalSlider_S_high_sliderMoved(int position);

    void on_spinBox_V_low_valueChanged(int arg1);

    void on_horizontalSlider_V_low_sliderMoved(int position);

    void on_spinBox_V_high_valueChanged(int arg1);

    void on_horizontalSlider_V_high_sliderMoved(int position);

    void on_pushButton_browse_clicked();

    void on_lineEdit_folder_path_editingFinished();

    void on_pushButton_load_clicked();

    void on_checkBox_binary_output_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
