#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent)
{
    initial();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initial() {

    resize(400, 300);    // â�� �⺻ũ�� ����

    //��ü �Ҵ�
    notepad = new QTextEdit(changeKor("�Ʒ��� �޸��ϼ���."));
    setCentralWidget(notepad);
}
QString changeKor(const char* strKor) {

    static QTextCodec* codec = QTextCodec::codecForName("eucKR");
    return codec->toUnicode(strKor);
}


��ó: https://hunit.tistory.com/243 [Ara Blog]