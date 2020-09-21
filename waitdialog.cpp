#include "waitdialog.h"
#include "ui_waitdialog.h"

waitDialog::waitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waitDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("正在载入数据，请稍候……"));
}

waitDialog::~waitDialog()
{
    delete ui;
}
