#include "Proyecto.h"
#include "ui_Proyecto.h"

Proyecto::Proyecto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proyecto)
{
    ch=1;
    cs=1;
    cd=1;
    cm=1;
    tm=new Tamagotchi();
    ui->setupUi(this);
    ui->comboBox->addItem("1. No come mucho.");
    ui->comboBox->addItem("2. Duerme poco.");
    ui->comboBox->addItem("3. No desecha mucho.");
    ui->comboBox->addItem("4. Se enferma poco.");

    ui->progressBar->setValue(tm->vidas);
}

Proyecto::~Proyecto()
{
    delete ui;
}

bool Proyecto::exiteNombre(QString n){
for(int i=0;i<nombres.size();i++){
    if(nombres[i]==n)
        return true;
}
return false;
}

void Proyecto::on_pushButton_7_clicked()
{
    nombre=ui->lineEdit->text();

    if(exiteNombre(nombre)==false){
        ui->comboBox_2->addItem(nombre);
        ui->comboBox_3->addItem(nombre);
        tamagotchi.push_back(new Tamagotchi());
        nombres.push_back(nombre);
    }
}

void Proyecto::pilaSueno(){
    int y=ui->comboBox_2->currentIndex();
    Nodo *s=tamagotchi[y]->getNodoSueno();
    int vs=s->valor;
    if(vs==cs){
        ui->listWidget_2->addItem(QString::number(vs));
        cs++;
    }
}

void Proyecto::pilaDesecho(){
    int y=ui->comboBox_2->currentIndex();
    Nodo *d=tamagotchi[y]->getNodoDesechos();
    int vd=d->valor;
    if(vd==cd){
       ui->listWidget_3->addItem(QString::number(vd));
       cd++;
    }
}

void Proyecto::pilaEnfermo(){
    int y=ui->comboBox_2->currentIndex();
    Nodo *m=tamagotchi[y]->getNodoEnfermedad();
    int vm=m->valor;
    if(vm==cm){
    ui->listWidget_4->addItem(QString::number(vm));
    cm++;
    }
}

void Proyecto::dano(){
    int x=ui->comboBox->currentIndex();
    int y=ui->comboBox_2->currentIndex();
    tamagotchi[y]->aumentarDano(x);
    /*Nodo *h=tamagotchi[y]->getNodoHambre();
        int vh=h->valor;
        if(vh==ch){*/
       // ui->listWidget->addItem(QString::number(vh));
       // ch++;
       // }

        //pilaSueno();
        //pilaDesecho();
        //pilaEnfermo();
    ui->progressBar->setValue(tamagotchi[y]->vidas);
}


void Proyecto::on_pushButton_6_clicked()
{
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(dano()));
    timer->start(2000);

    //tm
    //ui->comboBox
   // tamagotchi.push_back(new Tamagotchi());
}

void Proyecto::on_pushButton_5_clicked()
{
    timer->stop();
}

void Proyecto::on_pushButton_clicked()
{
    int y=ui->comboBox_2->currentIndex();
    tamagotchi[y]->quitarHambre();

}

void Proyecto::on_pushButton_2_clicked()
{
    int y=ui->comboBox_2->currentIndex();
    tamagotchi[y]->quitarSueno();
}

void Proyecto::on_pushButton_3_clicked()
{
    int y=ui->comboBox_2->currentIndex();
    tamagotchi[y]->quitarDesechos();
}

void Proyecto::on_pushButton_4_clicked()
{
    int y=ui->comboBox_2->currentIndex();
    tamagotchi[y]->quitarEnfermedad();
}
