/********************************************************************************
** Form generated from reading UI file 'serialconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALCONFIGDIALOG_H
#define UI_SERIALCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *configGroupBox;
    QGridLayout *gridLayout;
    QLabel *portLabel;
    QComboBox *portComboBox;
    QPushButton *refreshButton;
    QLabel *baudRateLabel;
    QComboBox *baudRateComboBox;
    QLabel *dataBitsLabel;
    QComboBox *dataBitsComboBox;
    QLabel *parityLabel;
    QComboBox *parityComboBox;
    QLabel *stopBitsLabel;
    QComboBox *stopBitsComboBox;
    QLabel *flowControlLabel;
    QComboBox *flowControlComboBox;
    QPushButton *testButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SerialConfigDialog)
    {
        if (SerialConfigDialog->objectName().isEmpty())
            SerialConfigDialog->setObjectName("SerialConfigDialog");
        SerialConfigDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(SerialConfigDialog);
        verticalLayout->setObjectName("verticalLayout");
        configGroupBox = new QGroupBox(SerialConfigDialog);
        configGroupBox->setObjectName("configGroupBox");
        gridLayout = new QGridLayout(configGroupBox);
        gridLayout->setObjectName("gridLayout");
        portLabel = new QLabel(configGroupBox);
        portLabel->setObjectName("portLabel");

        gridLayout->addWidget(portLabel, 0, 0, 1, 1);

        portComboBox = new QComboBox(configGroupBox);
        portComboBox->setObjectName("portComboBox");

        gridLayout->addWidget(portComboBox, 0, 1, 1, 1);

        refreshButton = new QPushButton(configGroupBox);
        refreshButton->setObjectName("refreshButton");

        gridLayout->addWidget(refreshButton, 0, 2, 1, 1);

        baudRateLabel = new QLabel(configGroupBox);
        baudRateLabel->setObjectName("baudRateLabel");

        gridLayout->addWidget(baudRateLabel, 1, 0, 1, 1);

        baudRateComboBox = new QComboBox(configGroupBox);
        baudRateComboBox->setObjectName("baudRateComboBox");

        gridLayout->addWidget(baudRateComboBox, 1, 1, 1, 2);

        dataBitsLabel = new QLabel(configGroupBox);
        dataBitsLabel->setObjectName("dataBitsLabel");

        gridLayout->addWidget(dataBitsLabel, 2, 0, 1, 1);

        dataBitsComboBox = new QComboBox(configGroupBox);
        dataBitsComboBox->setObjectName("dataBitsComboBox");

        gridLayout->addWidget(dataBitsComboBox, 2, 1, 1, 2);

        parityLabel = new QLabel(configGroupBox);
        parityLabel->setObjectName("parityLabel");

        gridLayout->addWidget(parityLabel, 3, 0, 1, 1);

        parityComboBox = new QComboBox(configGroupBox);
        parityComboBox->setObjectName("parityComboBox");

        gridLayout->addWidget(parityComboBox, 3, 1, 1, 2);

        stopBitsLabel = new QLabel(configGroupBox);
        stopBitsLabel->setObjectName("stopBitsLabel");

        gridLayout->addWidget(stopBitsLabel, 4, 0, 1, 1);

        stopBitsComboBox = new QComboBox(configGroupBox);
        stopBitsComboBox->setObjectName("stopBitsComboBox");

        gridLayout->addWidget(stopBitsComboBox, 4, 1, 1, 2);

        flowControlLabel = new QLabel(configGroupBox);
        flowControlLabel->setObjectName("flowControlLabel");

        gridLayout->addWidget(flowControlLabel, 5, 0, 1, 1);

        flowControlComboBox = new QComboBox(configGroupBox);
        flowControlComboBox->setObjectName("flowControlComboBox");

        gridLayout->addWidget(flowControlComboBox, 5, 1, 1, 2);


        verticalLayout->addWidget(configGroupBox);

        testButton = new QPushButton(SerialConfigDialog);
        testButton->setObjectName("testButton");

        verticalLayout->addWidget(testButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(SerialConfigDialog);
        okButton->setObjectName("okButton");

        buttonLayout->addWidget(okButton);

        cancelButton = new QPushButton(SerialConfigDialog);
        cancelButton->setObjectName("cancelButton");

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(SerialConfigDialog);

        QMetaObject::connectSlotsByName(SerialConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *SerialConfigDialog)
    {
        SerialConfigDialog->setWindowTitle(QCoreApplication::translate("SerialConfigDialog", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        configGroupBox->setTitle(QCoreApplication::translate("SerialConfigDialog", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        portLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\344\270\262\345\217\243:", nullptr));
        refreshButton->setText(QCoreApplication::translate("SerialConfigDialog", "\345\210\267\346\226\260", nullptr));
        baudRateLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\346\263\242\347\211\271\347\216\207:", nullptr));
        dataBitsLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\346\225\260\346\215\256\344\275\215:", nullptr));
        parityLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\345\245\207\345\201\266\346\240\241\351\252\214:", nullptr));
        stopBitsLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\345\201\234\346\255\242\344\275\215:", nullptr));
        flowControlLabel->setText(QCoreApplication::translate("SerialConfigDialog", "\346\265\201\346\216\247\345\210\266:", nullptr));
        testButton->setText(QCoreApplication::translate("SerialConfigDialog", "\346\265\213\350\257\225\350\277\236\346\216\245", nullptr));
        okButton->setText(QCoreApplication::translate("SerialConfigDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("SerialConfigDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialConfigDialog: public Ui_SerialConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALCONFIGDIALOG_H
