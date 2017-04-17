#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QTextEdit;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void openFile();

private:
    Ui::MainWindow *ui;

    QAction *m_openAction;
    QAction *m_saveAction;

    QTextEdit *m_textEdit;
};

#endif // MAINWINDOW_H
