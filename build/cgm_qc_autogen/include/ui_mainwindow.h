/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QLabel *label_connectionStatus;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget_testItems;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_reset;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QProgressBar *progressBar_test;
    QLabel *label_startTime;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_passValue;
    QLabel *label_4;
    QLabel *label_failValue;
    QLabel *label_6;
    QLabel *label_fpyValue;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget_results;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_connect = new QPushButton(groupBox);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        label_connectionStatus = new QLabel(groupBox);
        label_connectionStatus->setObjectName("label_connectionStatus");

        horizontalLayout->addWidget(label_connectionStatus);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        treeWidget_testItems = new QTreeWidget(groupBox_2);
        treeWidget_testItems->setObjectName("treeWidget_testItems");

        verticalLayout_3->addWidget(treeWidget_testItems);


        verticalLayout_2->addWidget(groupBox_2);

        splitter->addWidget(widget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_start = new QPushButton(groupBox_3);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(groupBox_3);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_2->addWidget(pushButton_stop);

        pushButton_reset = new QPushButton(groupBox_3);
        pushButton_reset->setObjectName("pushButton_reset");

        horizontalLayout_2->addWidget(pushButton_reset);


        verticalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(widget_2);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        progressBar_test = new QProgressBar(groupBox_4);
        progressBar_test->setObjectName("progressBar_test");
        progressBar_test->setValue(0);

        verticalLayout_5->addWidget(progressBar_test);

        label_startTime = new QLabel(groupBox_4);
        label_startTime->setObjectName("label_startTime");

        verticalLayout_5->addWidget(label_startTime);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(widget_2);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_passValue = new QLabel(groupBox_5);
        label_passValue->setObjectName("label_passValue");

        gridLayout->addWidget(label_passValue, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_failValue = new QLabel(groupBox_5);
        label_failValue->setObjectName("label_failValue");

        gridLayout->addWidget(label_failValue, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_fpyValue = new QLabel(groupBox_5);
        label_fpyValue->setObjectName("label_fpyValue");

        gridLayout->addWidget(label_fpyValue, 2, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(widget_2);
        groupBox_6->setObjectName("groupBox_6");
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tableWidget_results = new QTableWidget(groupBox_6);
        tableWidget_results->setObjectName("tableWidget_results");

        verticalLayout_6->addWidget(tableWidget_results);


        verticalLayout_4->addWidget(groupBox_6);

        splitter->addWidget(widget_2);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CGM QC \346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\262\345\217\243", nullptr));
        label_connectionStatus->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201: \346\234\252\350\277\236\346\216\245", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_testItems->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\351\241\271\347\233\256", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\346\216\247\345\210\266", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\350\257\225", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\346\265\213\350\257\225", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\350\277\233\345\272\246", nullptr));
        label_startTime->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264: --", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\273\237\350\256\241", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\200\232\350\277\207:", nullptr));
        label_passValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\244\261\350\264\245:", nullptr));
        label_failValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\211\257\347\216\207:", nullptr));
        label_fpyValue->setText(QCoreApplication::translate("MainWindow", "0.0%", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
