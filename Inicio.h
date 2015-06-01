#ifndef INICIO_H
#define INICIO_H

#include <QWidget>

namespace Ui {
class Inicio;
}

class Inicio : public QWidget
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
