#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <array>
#include <vector>

#include <QMainWindow>


class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   MainWindow(QMainWindow *pParent = nullptr);
   virtual ~MainWindow();

protected slots:

protected:
   void closeEvent(QCloseEvent *bar) override;
private:

};

#endif // MAINWINDOW_H_
