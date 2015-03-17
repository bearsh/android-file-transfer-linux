#include "progressdialog.h"
#include "ui_progressdialog.h"

ProgressDialog::ProgressDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ProgressDialog)
{
	ui->setupUi(this);
}

ProgressDialog::~ProgressDialog()
{
	delete ui;
}

void ProgressDialog::setValue(int current)
{
	ui->progressBar->setValue(current);
}

void ProgressDialog::setMaximum(int current)
{
	ui->progressBar->setMaximum(current);
}
