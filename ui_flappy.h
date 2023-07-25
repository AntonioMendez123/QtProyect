/********************************************************************************
** Form generated from reading UI file 'flappy.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLAPPY_H
#define UI_FLAPPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flappy
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *character;
    QLabel *tuberiaAbajo;
    QLabel *tuberiaarribna;
    QLabel *tuberiaAbajo_2;
    QLabel *tuberiaarribna_2;
    QLabel *tuberiaarribna_3;
    QLabel *tuberiaarribna_4;
    QLabel *tuberiaarribna_5;
    QLabel *tuberiaarribna_6;
    QLabel *tuberiaarribna_7;
    QLabel *point;
    QLabel *score;
    QPushButton *replay;
    QLabel *best;
    QLabel *carita;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *flappy)
    {
        if (flappy->objectName().isEmpty())
            flappy->setObjectName("flappy");
        flappy->resize(508, 267);
        centralwidget = new QWidget(flappy);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -10, 131, 271));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: white;\n"
"}"));
        label->setInputMethodHints(Qt::ImhHiddenText);
        label->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/background.png")));
        label->setScaledContents(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(128, -10, 131, 271));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: white;\n"
"}"));
        label_2->setInputMethodHints(Qt::ImhHiddenText);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/background.png")));
        label_2->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, -10, 131, 271));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: white;\n"
"}"));
        label_3->setInputMethodHints(Qt::ImhHiddenText);
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/background.png")));
        label_3->setScaledContents(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(378, -10, 131, 271));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: white;\n"
"}"));
        label_4->setInputMethodHints(Qt::ImhHiddenText);
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/background.png")));
        label_4->setScaledContents(false);
        character = new QLabel(centralwidget);
        character->setObjectName("character");
        character->setGeometry(QRect(20, 110, 21, 21));
        character->setInputMethodHints(Qt::ImhHiddenText);
        character->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/chara2.png")));
        tuberiaAbajo = new QLabel(centralwidget);
        tuberiaAbajo->setObjectName("tuberiaAbajo");
        tuberiaAbajo->setGeometry(QRect(480, -10, 31, 141));
        tuberiaAbajo->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaAbajo->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/tuberia.png")));
        tuberiaarribna = new QLabel(centralwidget);
        tuberiaarribna->setObjectName("tuberiaarribna");
        tuberiaarribna->setGeometry(QRect(340, 130, 31, 141));
        tuberiaarribna->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/tuberia2.png")));
        tuberiaAbajo_2 = new QLabel(centralwidget);
        tuberiaAbajo_2->setObjectName("tuberiaAbajo_2");
        tuberiaAbajo_2->setGeometry(QRect(220, -30, 31, 141));
        tuberiaAbajo_2->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaAbajo_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/tuberia.png")));
        tuberiaarribna_2 = new QLabel(centralwidget);
        tuberiaarribna_2->setObjectName("tuberiaarribna_2");
        tuberiaarribna_2->setGeometry(QRect(110, 130, 31, 141));
        tuberiaarribna_2->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/tuberia2.png")));
        tuberiaarribna_3 = new QLabel(centralwidget);
        tuberiaarribna_3->setObjectName("tuberiaarribna_3");
        tuberiaarribna_3->setGeometry(QRect(65, 149, 191, 161));
        tuberiaarribna_3->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/ground.png")));
        tuberiaarribna_4 = new QLabel(centralwidget);
        tuberiaarribna_4->setObjectName("tuberiaarribna_4");
        tuberiaarribna_4->setGeometry(QRect(212, 149, 191, 161));
        tuberiaarribna_4->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/ground.png")));
        tuberiaarribna_5 = new QLabel(centralwidget);
        tuberiaarribna_5->setObjectName("tuberiaarribna_5");
        tuberiaarribna_5->setGeometry(QRect(358, 149, 191, 161));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        tuberiaarribna_5->setFont(font);
        tuberiaarribna_5->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_5->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/ground.png")));
        tuberiaarribna_6 = new QLabel(centralwidget);
        tuberiaarribna_6->setObjectName("tuberiaarribna_6");
        tuberiaarribna_6->setGeometry(QRect(2, 149, 191, 161));
        tuberiaarribna_6->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_6->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/ground.png")));
        tuberiaarribna_7 = new QLabel(centralwidget);
        tuberiaarribna_7->setObjectName("tuberiaarribna_7");
        tuberiaarribna_7->setGeometry(QRect(-12, 149, 191, 161));
        tuberiaarribna_7->setInputMethodHints(Qt::ImhHiddenText);
        tuberiaarribna_7->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/ground.png")));
        point = new QLabel(centralwidget);
        point->setObjectName("point");
        point->setGeometry(QRect(475, 0, 31, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(false);
        point->setFont(font1);
        point->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        point->setInputMethodHints(Qt::ImhHiddenText);
        score = new QLabel(centralwidget);
        score->setObjectName("score");
        score->setGeometry(QRect(166, 80, 161, 91));
        QFont font2;
        font2.setBold(true);
        score->setFont(font2);
        score->setInputMethodHints(Qt::ImhHiddenText);
        score->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/59537 - copia (10).png")));
        score->setScaledContents(true);
        replay = new QPushButton(centralwidget);
        replay->setObjectName("replay");
        replay->setGeometry(QRect(272, 142, 49, 18));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Terminal")});
        font3.setPointSize(9);
        font3.setBold(true);
        replay->setFont(font3);
        replay->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #ddae54;\n"
"background-color: rgb(219,218,150);\n"
"border:none;\n"
"}"));
        replay->setIconSize(QSize(4, 0));
        best = new QLabel(centralwidget);
        best->setObjectName("best");
        best->setGeometry(QRect(195, 90, 31, 16));
        best->setInputMethodHints(Qt::ImhHiddenText);
        best->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/png gamer/59537 - copia (11).png")));
        best->setScaledContents(true);
        carita = new QLabel(centralwidget);
        carita->setObjectName("carita");
        carita->setGeometry(QRect(186, 106, 51, 51));
        carita->setFont(font2);
        carita->setInputMethodHints(Qt::ImhHiddenText);
        carita->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/3b1a1185-392a-4e9a-b298-86c16c3a6a8a.jpg")));
        carita->setScaledContents(true);
        flappy->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        character->raise();
        tuberiaAbajo->raise();
        tuberiaarribna->raise();
        tuberiaAbajo_2->raise();
        tuberiaarribna_2->raise();
        tuberiaarribna_3->raise();
        tuberiaarribna_4->raise();
        tuberiaarribna_5->raise();
        tuberiaarribna_6->raise();
        tuberiaarribna_7->raise();
        score->raise();
        point->raise();
        replay->raise();
        best->raise();
        carita->raise();
        statusbar = new QStatusBar(flappy);
        statusbar->setObjectName("statusbar");
        flappy->setStatusBar(statusbar);

        retranslateUi(flappy);

        QMetaObject::connectSlotsByName(flappy);
    } // setupUi

    void retranslateUi(QMainWindow *flappy)
    {
        flappy->setWindowTitle(QCoreApplication::translate("flappy", "flappy", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        character->setText(QString());
        tuberiaAbajo->setText(QString());
        tuberiaarribna->setText(QString());
        tuberiaAbajo_2->setText(QString());
        tuberiaarribna_2->setText(QString());
        tuberiaarribna_3->setText(QString());
        tuberiaarribna_4->setText(QString());
        tuberiaarribna_5->setText(QString());
        tuberiaarribna_6->setText(QString());
        tuberiaarribna_7->setText(QString());
        point->setText(QCoreApplication::translate("flappy", "1", nullptr));
        score->setText(QString());
        replay->setText(QCoreApplication::translate("flappy", "Replay", nullptr));
        best->setText(QString());
        carita->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class flappy: public Ui_flappy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLAPPY_H
