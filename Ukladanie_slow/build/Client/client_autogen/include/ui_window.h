/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_0;
    QPushButton *pushButton_9;
    QPushButton *submitButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_14;
    QLabel *title;
    QPushButton *pushButton_11;
    QPushButton *connectButton;
    QLineEdit *messageEdit;
    QPushButton *pushButton_4;
    QLabel *result;
    QLabel *points;
    QPushButton *startButton;
    QLabel *runda;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(536, 530);
        gridLayout = new QGridLayout(Window);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(Window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setPointSize(18);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 3, 1, 1);

        label = new QLabel(Window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(Window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 100));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Naskh Arabic"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 9, 1, 1, 1);

        pushButton_12 = new QPushButton(Window);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(100, 100));
        pushButton_12->setFont(font1);

        gridLayout->addWidget(pushButton_12, 7, 4, 1, 1);

        pushButton_0 = new QPushButton(Window);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(100, 100));
        pushButton_0->setFont(font1);

        gridLayout->addWidget(pushButton_0, 7, 0, 1, 1);

        pushButton_9 = new QPushButton(Window);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setFont(font1);

        gridLayout->addWidget(pushButton_9, 8, 3, 1, 1);

        submitButton = new QPushButton(Window);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setEnabled(false);

        gridLayout->addWidget(submitButton, 10, 4, 1, 1);

        pushButton_3 = new QPushButton(Window);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_3->setFont(font1);

        gridLayout->addWidget(pushButton_3, 8, 4, 1, 1);

        pushButton_6 = new QPushButton(Window);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 8, 0, 1, 1);

        pushButton_1 = new QPushButton(Window);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(100, 100));
        pushButton_1->setFont(font1);

        gridLayout->addWidget(pushButton_1, 8, 2, 1, 1);

        pushButton_7 = new QPushButton(Window);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 8, 1, 1, 1);

        pushButton_10 = new QPushButton(Window);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(100, 100));
        pushButton_10->setFont(font1);

        gridLayout->addWidget(pushButton_10, 7, 2, 1, 1);

        pushButton_13 = new QPushButton(Window);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(100, 100));
        pushButton_13->setFont(font1);

        gridLayout->addWidget(pushButton_13, 9, 2, 1, 1);

        pushButton_5 = new QPushButton(Window);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setFont(font1);

        gridLayout->addWidget(pushButton_5, 7, 1, 1, 1);

        pushButton_8 = new QPushButton(Window);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 9, 4, 1, 1);

        pushButton_14 = new QPushButton(Window);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(100, 100));
        pushButton_14->setFont(font1);

        gridLayout->addWidget(pushButton_14, 9, 3, 1, 1);

        title = new QLabel(Window);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Open Sans Extrabold"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        title->setFont(font2);
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 1, 1, 3);

        pushButton_11 = new QPushButton(Window);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(100, 100));
        pushButton_11->setFont(font1);

        gridLayout->addWidget(pushButton_11, 9, 0, 1, 1);

        connectButton = new QPushButton(Window);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Open Sans"));
        font3.setPointSize(10);
        connectButton->setFont(font3);

        gridLayout->addWidget(connectButton, 1, 0, 1, 2);

        messageEdit = new QLineEdit(Window);
        messageEdit->setObjectName(QString::fromUtf8("messageEdit"));
        messageEdit->setEnabled(false);

        gridLayout->addWidget(messageEdit, 10, 0, 1, 4);

        pushButton_4 = new QPushButton(Window);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setFont(font1);

        gridLayout->addWidget(pushButton_4, 7, 3, 1, 1);

        result = new QLabel(Window);
        result->setObjectName(QString::fromUtf8("result"));
        result->setMinimumSize(QSize(0, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Open Sans"));
        font4.setPointSize(16);
        result->setFont(font4);

        gridLayout->addWidget(result, 4, 0, 1, 5);

        points = new QLabel(Window);
        points->setObjectName(QString::fromUtf8("points"));
        points->setFont(font);

        gridLayout->addWidget(points, 3, 1, 1, 1);

        startButton = new QPushButton(Window);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(false);
        startButton->setFont(font3);

        gridLayout->addWidget(startButton, 1, 3, 1, 2);

        runda = new QLabel(Window);
        runda->setObjectName(QString::fromUtf8("runda"));
        runda->setFont(font);

        gridLayout->addWidget(runda, 3, 4, 1, 1);


        retranslateUi(Window);

        submitButton->setDefault(true);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "GAME", nullptr));
        label_2->setText(QCoreApplication::translate("Window", "RUNDA:", nullptr));
        label->setText(QCoreApplication::translate("Window", "WYNIK:", nullptr));
        pushButton_2->setText(QString());
        pushButton_12->setText(QString());
        pushButton_0->setText(QString());
        pushButton_9->setText(QString());
        submitButton->setText(QCoreApplication::translate("Window", "ZATWIERDZ", nullptr));
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_1->setText(QString());
        pushButton_7->setText(QString());
        pushButton_10->setText(QString());
        pushButton_13->setText(QString());
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        pushButton_14->setText(QString());
        title->setText(QCoreApplication::translate("Window", "PODAJ SLOWA", nullptr));
        pushButton_11->setText(QString());
        connectButton->setText(QCoreApplication::translate("Window", "POLACZ", nullptr));
        pushButton_4->setText(QString());
        result->setText(QString());
        points->setText(QString());
        startButton->setText(QCoreApplication::translate("Window", "START", nullptr));
        runda->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
