#include <QApplication>
#include <QBoxLayout>
#include <QCheckBox>
#include <QComboBox>
#include <QDateTime>
#include <QDebug>
#include <QFileDialog>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QProgressDialog>
#include <QPushButton>
#include <QTimer>
#include <QSpinBox>
#include <QFuture>
#include <QThread>
#include <QListView>
#include "mainwindow.h"

MainWindow::MainWindow(QMainWindow *pParent)
   : QMainWindow(pParent)
{

   QWidget *pCentralWidget = new QWidget(this);
   setCentralWidget(pCentralWidget);
   QVBoxLayout *pVLayout = new QVBoxLayout;
   pCentralWidget->setMinimumHeight(768);
   pCentralWidget->setMinimumWidth(1024);
   pCentralWidget->setLayout(pVLayout);
}



void MainWindow::closeEvent(QCloseEvent *bar)
{

}

MainWindow::~MainWindow()
{

}

