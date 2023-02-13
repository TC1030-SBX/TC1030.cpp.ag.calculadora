#pragma once

class Calculadora {
private:
    double x;
    double y;
public:
    Calculadora();
    Calculadora(double, double);

    double getX();
    double getY();
    void setX(double);
    void setY(double);

    double suma();
    double multiplica();
    double resta();
    double divide();
};