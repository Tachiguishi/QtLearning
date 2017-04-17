#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_openAction = new QAction(QIcon(":/icons/file_open"), tr("&Open..."), this);
    m_openAction->setShortcut(QKeySequence::Open);
    m_openAction->setStatusTip(tr("Open an existing file"));

    m_saveAction = new QAction(QIcon(":/icons/file_save"), tr("&Save..."), this);
    m_saveAction->setShortcut(QKeySequence::Save);
    m_saveAction->setStatusTip("Save current file");

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(m_openAction);
    file->addAction(m_saveAction);

    ui->mainToolBar->addAction(m_openAction);
    ui->mainToolBar->addAction(m_saveAction);
}

MainWindow::~MainWindow()
{
    delete ui;

    if(m_openAction){
        delete m_openAction;
    }

    if(m_saveAction){
        delete m_saveAction;
    }
}
