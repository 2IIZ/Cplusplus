#ifndef CADRE_H
#define CADRE_H

#include <QMainWindow>

namespace Ui {
class Cadre;
}

class Cadre : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cadre(QWidget *parent = nullptr);
    ~Cadre();

private:
    Ui::Cadre *ui;
};

#endif // CADRE_H
