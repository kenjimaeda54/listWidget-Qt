# List Widget
Aprender a usar o list widget

## Motivacao
Continuar aprendendo o uso de Qt e seus componentes


## Feature
- List Widget e uma lista interativa que usuário pode colocar os valores 
- Criei de forma dinâmica e também manual
- Na forma dinâmica usei foreach recurso adicionado na linguagem C++
- Ele precisa de um container, neste casso o container foi os itens selecionados pelo usuário, apos ele selecionar ele poderia deletar este itens 
- Para capturar os itens selecionados usei o selectedItems()
- Dentro do foreach instanciei o inteirador por ponteiro,usando a classe QListWidget.
- Assim pode destruir na memória através da palavra reservada delete, toda classe instanciada em forma de ponteiro, seu ciclo de vida gerenciado por nos
- Também coloquei a opção deixar com vermelho
- Outro recurso interessante foi o uso do label e seu método isEmpty(), dessa forma verifico se o input esta vazio, caso estiver não adiciono valor no listWidget



``` c++


void ListWidget::on_btn_add_clicked()
{
     if(ui->input_so->text().isEmpty()) return; //se estiver vazio o texto ele morre a funcao
     ui->list_so->addItem(ui->input_so->text());
     ui->input_so->clear();
}


void ListWidget::on_btn_delete_clicked()
{
//    ui->litst_so->currentItem()->setForeground(Qt::red); //a cor do texto selecionado ficara vermelho

    foreach(QListWidgetItem *name, ui->list_so->selectedItems()  ){
          delete ui->list_so->takeItem(ui->list_so->row(name));
    };

}


````

## ScreenShoot

![add.jpeg](https://github.com/kenjimaeda54/listWidget-Qt/blob/develop/add.jpeg)
![tryAdd.jpeg](https://github.com/kenjimaeda54/listWidget-Qt/blob/develop/add.jpeg)




