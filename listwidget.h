#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ListWidget; }
QT_END_NAMESPACE

class ListWidget : public QMainWindow
{
    Q_OBJECT

public:
    ListWidget(QWidget *parent = nullptr);
    ~ListWidget();

private slots:
    void on_btn_add_clicked();

    void on_btn_delete_clicked();

private:
    Ui::ListWidget *ui;
};
#endif // LISTWIDGET_H
