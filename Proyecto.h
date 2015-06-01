#ifndef PROYECTO_H
#define PROYECTO_H
#include "Tamagotchi.h"
#include <QMainWindow>
#include <vector>

namespace Ui {
class Proyecto;
}

class Proyecto : public QMainWindow
{
    Q_OBJECT

public:
    QString nombre;
    int ch,cs,cd,cm;
    vector<Tamagotchi*> tamagotchi;
    vector<QString> nombres;
    Tamagotchi *tm;
    QTimer *timer;
    bool exiteNombre(QString n);
    explicit Proyecto(QWidget *parent = 0);
    ~Proyecto();

private slots:
    void dano();
    void pilaSueno();
    void pilaDesecho();
    void pilaEnfermo();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Proyecto *ui;
};

#endif // PROYECTO_H
