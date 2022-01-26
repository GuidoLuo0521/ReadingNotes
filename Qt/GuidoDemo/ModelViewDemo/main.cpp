#include <QApplication>
#include <QTableView>

#include "mymodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTableView view;
    MyModel model;

    view.setModel(&model);

    view.show();

    return a.exec();
}
