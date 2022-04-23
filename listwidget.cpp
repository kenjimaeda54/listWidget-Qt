#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListWidget)
{
    ui->setupUi(this);
     QListWidgetItem *sytemOne = new QListWidgetItem("Windows");
     QListWidgetItem *systemTwo =  new QListWidgetItem("Linux");/* estou usando a classe QListWidgeItem e instanciando na heap atraves do ponteiro*/
     ui->list_so->addItem(sytemOne);
     ui->list_so->addItem(systemTwo);  //adicionando membros na lista sem ser dinamico abaixo sera dinamico

}

ListWidget::~ListWidget()
{
    delete ui;
}


void ListWidget::on_btn_add_clicked()
{
     if(ui->input_so->text().isEmpty()) return; //se estiver vazio o texto ele morre a funcao
     ui->list_so->addItem(ui->input_so->text());
     ui->input_so->clear();
}


void ListWidget::on_btn_delete_clicked()
{
//    ui->litst_so->currentItem()->setForeground(Qt::red); //a cor do texto selecionado ficara vermelho

    foreach(QListWidgetItem *name, ui->list_so->selectedItems()  ){//selectedItens() e um container,neste caso colecao de itnes selecinados,  estao sendo enviada ponteiro *name
          delete ui->list_so->takeItem(ui->list_so->row(name));    //preciso antes chamar a classe ListWidgetItem com poneitro pois assim posso usar delete  que um recurso de matar classes
                                                                   //qeu foram instanciadas por ponteiros
    };

}

