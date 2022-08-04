/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QLineEdit *lineEdit_folder_path;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_load;
    QCheckBox *checkBox_binary_output;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_S_low;
    QLabel *label_10;
    QSpinBox *spinBox_V_high;
    QSpinBox *spinBox_H_high;
    QSpinBox *spinBox_H_low;
    QSpinBox *spinBox_S_high;
    QSpinBox *spinBox_V_low;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSlider *horizontalSlider_S_low;
    QSlider *horizontalSlider_S_high;
    QSlider *horizontalSlider_V_high;
    QSlider *horizontalSlider_H_high;
    QSlider *horizontalSlider_V_low;
    QSlider *horizontalSlider_H_low;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_source_image;
    QLabel *label_processed_image;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QFont font;
        font.setPointSize(12);
        centralwidget->setFont(font);
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_2->addWidget(label_15);

        lineEdit_folder_path = new QLineEdit(groupBox_4);
        lineEdit_folder_path->setObjectName(QString::fromUtf8("lineEdit_folder_path"));

        horizontalLayout_2->addWidget(lineEdit_folder_path);

        pushButton_browse = new QPushButton(groupBox_4);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));

        horizontalLayout_2->addWidget(pushButton_browse);

        pushButton_load = new QPushButton(groupBox_4);
        pushButton_load->setObjectName(QString::fromUtf8("pushButton_load"));

        horizontalLayout_2->addWidget(pushButton_load);

        checkBox_binary_output = new QCheckBox(groupBox_4);
        checkBox_binary_output->setObjectName(QString::fromUtf8("checkBox_binary_output"));

        horizontalLayout_2->addWidget(checkBox_binary_output);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spinBox_S_low = new QSpinBox(groupBox);
        spinBox_S_low->setObjectName(QString::fromUtf8("spinBox_S_low"));
        spinBox_S_low->setMaximum(255);

        gridLayout_3->addWidget(spinBox_S_low, 0, 5, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 6, 1, 1);

        spinBox_V_high = new QSpinBox(groupBox);
        spinBox_V_high->setObjectName(QString::fromUtf8("spinBox_V_high"));
        spinBox_V_high->setMaximum(255);
        spinBox_V_high->setValue(255);

        gridLayout_3->addWidget(spinBox_V_high, 0, 11, 1, 1);

        spinBox_H_high = new QSpinBox(groupBox);
        spinBox_H_high->setObjectName(QString::fromUtf8("spinBox_H_high"));
        spinBox_H_high->setMaximum(179);
        spinBox_H_high->setValue(179);

        gridLayout_3->addWidget(spinBox_H_high, 0, 3, 1, 1);

        spinBox_H_low = new QSpinBox(groupBox);
        spinBox_H_low->setObjectName(QString::fromUtf8("spinBox_H_low"));
        spinBox_H_low->setMaximum(179);

        gridLayout_3->addWidget(spinBox_H_low, 0, 1, 1, 1);

        spinBox_S_high = new QSpinBox(groupBox);
        spinBox_S_high->setObjectName(QString::fromUtf8("spinBox_S_high"));
        spinBox_S_high->setMaximum(255);
        spinBox_S_high->setValue(255);

        gridLayout_3->addWidget(spinBox_S_high, 0, 7, 1, 1);

        spinBox_V_low = new QSpinBox(groupBox);
        spinBox_V_low->setObjectName(QString::fromUtf8("spinBox_V_low"));
        spinBox_V_low->setMaximum(255);

        gridLayout_3->addWidget(spinBox_V_low, 0, 9, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 8, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 0, 4, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 10, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSlider_S_low = new QSlider(groupBox_2);
        horizontalSlider_S_low->setObjectName(QString::fromUtf8("horizontalSlider_S_low"));
        horizontalSlider_S_low->setMaximum(255);
        horizontalSlider_S_low->setOrientation(Qt::Horizontal);
        horizontalSlider_S_low->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_S_low->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_S_low, 2, 1, 1, 1);

        horizontalSlider_S_high = new QSlider(groupBox_2);
        horizontalSlider_S_high->setObjectName(QString::fromUtf8("horizontalSlider_S_high"));
        horizontalSlider_S_high->setMaximum(255);
        horizontalSlider_S_high->setValue(255);
        horizontalSlider_S_high->setOrientation(Qt::Horizontal);
        horizontalSlider_S_high->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_S_high->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_S_high, 3, 1, 1, 1);

        horizontalSlider_V_high = new QSlider(groupBox_2);
        horizontalSlider_V_high->setObjectName(QString::fromUtf8("horizontalSlider_V_high"));
        horizontalSlider_V_high->setMaximum(255);
        horizontalSlider_V_high->setValue(255);
        horizontalSlider_V_high->setOrientation(Qt::Horizontal);
        horizontalSlider_V_high->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_V_high->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_V_high, 5, 1, 1, 1);

        horizontalSlider_H_high = new QSlider(groupBox_2);
        horizontalSlider_H_high->setObjectName(QString::fromUtf8("horizontalSlider_H_high"));
        horizontalSlider_H_high->setMaximum(179);
        horizontalSlider_H_high->setValue(179);
        horizontalSlider_H_high->setOrientation(Qt::Horizontal);
        horizontalSlider_H_high->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_H_high->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_H_high, 1, 1, 1, 1);

        horizontalSlider_V_low = new QSlider(groupBox_2);
        horizontalSlider_V_low->setObjectName(QString::fromUtf8("horizontalSlider_V_low"));
        horizontalSlider_V_low->setMaximum(255);
        horizontalSlider_V_low->setOrientation(Qt::Horizontal);
        horizontalSlider_V_low->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_V_low->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_V_low, 4, 1, 1, 1);

        horizontalSlider_H_low = new QSlider(groupBox_2);
        horizontalSlider_H_low->setObjectName(QString::fromUtf8("horizontalSlider_H_low"));
        horizontalSlider_H_low->setMaximum(179);
        horizontalSlider_H_low->setOrientation(Qt::Horizontal);
        horizontalSlider_H_low->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_H_low->setTickInterval(5);

        gridLayout_4->addWidget(horizontalSlider_H_low, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 5, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_source_image = new QLabel(groupBox_3);
        label_source_image->setObjectName(QString::fromUtf8("label_source_image"));
        label_source_image->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_source_image);

        label_processed_image = new QLabel(groupBox_3);
        label_processed_image->setObjectName(QString::fromUtf8("label_processed_image"));
        label_processed_image->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_processed_image);


        verticalLayout_4->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        label_10->setBuddy(spinBox_S_high);
        label_8->setBuddy(spinBox_H_high);
        label_7->setBuddy(spinBox_H_low);
        label_11->setBuddy(spinBox_V_low);
        label_9->setBuddy(spinBox_S_low);
        label_12->setBuddy(spinBox_V_high);
        label->setBuddy(horizontalSlider_H_low);
        label_2->setBuddy(horizontalSlider_H_high);
        label_3->setBuddy(horizontalSlider_S_low);
        label_4->setBuddy(horizontalSlider_S_high);
        label_5->setBuddy(horizontalSlider_V_low);
        label_6->setBuddy(horizontalSlider_V_high);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "HSV Range Finder", nullptr));
        groupBox_4->setTitle(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Folder:", nullptr));
        pushButton_browse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        pushButton_load->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        checkBox_binary_output->setText(QCoreApplication::translate("MainWindow", "Binary Output", nullptr));
        groupBox->setTitle(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "S<sub>H</sub>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "H<sub>H</sub>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "H<sub>L</sub>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "V<sub>L</sub>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "S<sub>L</sub>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "V<sub>H</sub>", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "H<sub>L</sub>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "H<sub>H</sub>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "S<sub>L</sub>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "S<sub>H</sub>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "V<sub>L</sub>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "V<sub>H</sub>", nullptr));
        groupBox_3->setTitle(QString());
        label_source_image->setText(QCoreApplication::translate("MainWindow", "Source Image", nullptr));
        label_processed_image->setText(QCoreApplication::translate("MainWindow", "Processed Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
