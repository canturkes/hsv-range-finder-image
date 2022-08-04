#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QString>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>

#include <atomic>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

namespace
{
    std::atomic<int> Hlow = 0, Hhigh = 255,
                    Slow = 0, Shigh = 255,
                    Vlow = 0, Vhigh = 255;

    std::atomic<bool> IMAGE_LOADED = false;
    std::atomic<bool> BINARY_OUTPUT = false;

    QString image_file_path;

    cv::Mat src;
    cv::Mat src_hsv;
    cv::Mat mask;
    cv::Mat mask_bgr;
    cv::Mat roi;
}


void ApplyHSVFilter(Ui::MainWindow* ui)
{
    if (IMAGE_LOADED.load(std::memory_order_acquire))
    {
        /* Process */
        cv::cvtColor(src, src_hsv, COLOR_BGR2HSV);
        cv::inRange(src_hsv, Scalar(Hlow, Slow, Vlow), Scalar(Hhigh, Shigh, Vhigh), mask);

        if (BINARY_OUTPUT.load())
        {
            cv::cvtColor(mask, mask_bgr, COLOR_GRAY2BGR);
        }
        else
        {
            roi = src.clone();
            roi.setTo(Scalar(0,0,0), mask == 0);
        }

        QImage qimg_src, qimg_proc;
        QPixmap qpix_src, qpix_proc;

        /* Display */
        qimg_src = QImage( (uchar*) src.data,
                           src.cols, src.rows, src.step,
                           QImage::Format_BGR888);

        qpix_src = QPixmap::fromImage(qimg_src);

        ui->label_source_image->setPixmap(qpix_src);

        if (BINARY_OUTPUT.load())
        {
            qimg_proc = QImage( (uchar*) mask_bgr.data,
                                mask_bgr.cols, mask_bgr.rows, mask_bgr.step,
                                QImage::Format_BGR888);
        }
        else
        {
            qimg_proc = QImage( (uchar*) roi.data,
                                roi.cols, roi.rows, roi.step,
                                QImage::Format_BGR888);
        }
        qpix_proc = QPixmap::fromImage(qimg_proc);

        ui->label_processed_image->setPixmap(qpix_proc);
    }
    else return;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* Show welcome message. */
    ui->statusbar->showMessage("Welcome to HSV Range Finder for images!");
}


MainWindow::~MainWindow()
{
    delete ui;
}


// ****************** SLIDERS & INPUTS *********/

// H (hue)

void MainWindow::on_spinBox_H_low_valueChanged(int arg1)
{
    if (arg1 <= Hhigh.load())
    {
        Hlow.store(arg1);
        ui->horizontalSlider_H_low->setValue(arg1);
    }
    else
    {
        Hlow.store(Hhigh.load());
        ui->horizontalSlider_H_low->setValue(Hhigh.load());
        ui->spinBox_H_low->setValue(Hhigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_H_low_sliderMoved(int position)
{
    if (position <= Hhigh.load())
    {
        Hlow.store(position);
        ui->spinBox_H_low->setValue(position);
    }
    else
    {
        Hlow.store(Hhigh.load());
        ui->spinBox_H_low->setValue(Hhigh.load());
        ui->horizontalSlider_H_low->setValue(Hhigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_spinBox_H_high_valueChanged(int arg1)
{
    if (arg1 >= Hlow.load())
    {
        Hhigh.store(arg1);
        ui->horizontalSlider_H_high->setValue(arg1);
    }
    else
    {
        Hhigh.store(Hlow.load());
        ui->horizontalSlider_H_high->setValue(Hlow.load());
        ui->spinBox_H_high->setValue(Hlow.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_H_high_sliderMoved(int position)
{
    if (position >= Hlow.load())
    {
        Hhigh.store(position);
        ui->spinBox_H_high->setValue(position);
    }
    else
    {
        Hhigh.store(Hlow.load());
        ui->spinBox_H_high->setValue(Hlow.load());
        ui->horizontalSlider_H_high->setValue(Hlow.load());
    }

    ApplyHSVFilter(ui);
}


// S (saturation)

void MainWindow::on_spinBox_S_low_valueChanged(int arg1)
{
    if (arg1 <= Shigh.load())
    {
        Slow.store(arg1);
        ui->horizontalSlider_S_low->setValue(arg1);
    }
    else
    {
        Slow.store(Shigh.load());
        ui->horizontalSlider_S_low->setValue(Shigh.load());
        ui->spinBox_S_low->setValue(Shigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_S_low_sliderMoved(int position)
{
    if (position <= Shigh.load())
    {
        Slow.store(position);
        ui->spinBox_S_low->setValue(position);
    }
    else
    {
        Slow.store(Shigh.load());
        ui->spinBox_S_low->setValue(Shigh.load());
        ui->horizontalSlider_S_low->setValue(Shigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_spinBox_S_high_valueChanged(int arg1)
{
    if (arg1 >= Slow.load())
    {
        Shigh.store(arg1);
        ui->horizontalSlider_S_high->setValue(arg1);
    }
    else
    {
        Shigh.store(Slow.load());
        ui->horizontalSlider_S_high->setValue(Slow.load());
        ui->spinBox_S_high->setValue(Slow.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_S_high_sliderMoved(int position)
{
    if (position >= Slow.load())
    {
        Shigh.store(position);
        ui->spinBox_S_high->setValue(position);
    }
    else
    {
        Shigh.store(Slow.load());
        ui->spinBox_S_high->setValue(Slow.load());
        ui->horizontalSlider_S_high->setValue(Slow.load());
    }

    ApplyHSVFilter(ui);
}


// V

void MainWindow::on_spinBox_V_low_valueChanged(int arg1)
{
    if (arg1 <= Vhigh.load())
    {
        Vlow.store(arg1);
        ui->horizontalSlider_V_low->setValue(arg1);
    }
    else
    {
        Vlow.store(Vhigh.load());
        ui->horizontalSlider_V_low->setValue(Vhigh.load());
        ui->spinBox_V_low->setValue(Vhigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_V_low_sliderMoved(int position)
{
    if (position <= Vhigh.load())
    {
        Vlow.store(position);
        ui->spinBox_V_low->setValue(position);
    }
    else
    {
        Vlow.store(Vhigh.load());
        ui->spinBox_V_low->setValue(Vhigh.load());
        ui->horizontalSlider_V_low->setValue(Vhigh.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_spinBox_V_high_valueChanged(int arg1)
{
    if (arg1 >= Vlow.load())
    {
        Vhigh.store(arg1);
        ui->horizontalSlider_V_high->setValue(arg1);
    }
    else
    {
        Vhigh.store(Vlow.load());
        ui->horizontalSlider_V_high->setValue(Vlow.load());
        ui->spinBox_V_high->setValue(Vlow.load());
    }

    ApplyHSVFilter(ui);
}


void MainWindow::on_horizontalSlider_V_high_sliderMoved(int position)
{
    if (position >= Vlow.load())
    {
        Vhigh.store(position);
        ui->spinBox_V_high->setValue(position);
    }
    else
    {
        Vhigh.store(Vlow.load());
        ui->spinBox_V_high->setValue(Vlow.load());
        ui->horizontalSlider_V_high->setValue(Vlow.load());
    }

    ApplyHSVFilter(ui);
}

/* BROWSE BUTTON */

void MainWindow::on_pushButton_browse_clicked()
{
    image_file_path = QFileDialog::getOpenFileName(this, "Choose an image", "C://", "Image Files (*.png *.jpg *.bmp)");
    ui->lineEdit_folder_path->setText(image_file_path);
}

/* LINE EDIT INPUT */

void MainWindow::on_lineEdit_folder_path_editingFinished()
{
    image_file_path = ui->lineEdit_folder_path->text();
}

/* LOAD BUTTON */

void MainWindow::on_pushButton_load_clicked()
{
    src = cv::imread(image_file_path.toStdString(), IMREAD_COLOR);

    if (src.empty())
    {
        IMAGE_LOADED.store(false, std::memory_order_release);

        QMessageBox::warning(this, "Load Error", "File cannot be opened.");

        ui->statusbar->showMessage("No image.");
    }
    else
    {
        ui->statusbar->showMessage("Image loaded.");

        IMAGE_LOADED.store(true, std::memory_order_release);

        ApplyHSVFilter(ui);
    }
}

/* BINARY OUTPUT SWITCH */

void MainWindow::on_checkBox_binary_output_clicked(bool checked)
{
    BINARY_OUTPUT.store(checked);

    ApplyHSVFilter(ui);
}
