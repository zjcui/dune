// Qt headers.
#include <QDebug>

#include <DUNE/DUNE.hpp>

// Local headers.
#include "ConnectionDialog.hpp"
#include "ui_ConnectionDialog.hpp"

ConnectionDialog::ConnectionDialog(QWidget* parent):
  QDialog(parent),
  ui(new Ui::ConnectionDialog)
{
  ui->setupUi(this);

  std::vector<std::string> ports = DUNE::Hardware::SerialPort::enumerate();
  for (int i = 0; i < ports.size(); ++i)
    ui->listWidget->addItem(QString::fromStdString(ports[i]));
  QListWidgetItem* first = ui->listWidget->item(0);
  if (first != NULL)
    ui->listWidget->setCurrentItem(first);

  ui->listWidget->setFocus();
}

ConnectionDialog::~ConnectionDialog(void)
{
  delete ui;
}

bool
ConnectionDialog::useTcp(void) const
{
  return ui->tcpBox->isChecked();
}

QString
ConnectionDialog::getTcpAddress(void) const
{
  return ui->tcp_addr->text();
}

unsigned
ConnectionDialog::getTcpPort(void) const
{
  return ui->tcp_port->value();
}

QString
ConnectionDialog::getDevice(void) const
{
  return ui->listWidget->currentItem()->text();
}
