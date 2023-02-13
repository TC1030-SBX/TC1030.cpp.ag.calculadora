#include "Calculadora.hpp"

//Constructor por default
Calculadora::Calculadora()
{
    this->x=0;
    this->y=0;
}

//Constructor con parametros
Calculadora::Calculadora(double x, double y) {
    this->x=x;
    this->y=y;
}

//Establecer el valor de x
void Calculadora::setX(double x) {
    this->x=x;
}

//Establecer el valor de y
void Calculadora::setY(double y) {
    this->y=y;
}

//Obtener el valor de x
double Calculadora::getX() {
    return this->x;
}

//Obtener el valor de y
double Calculadora::getY() {
    return this->y;
}

//La suma de dos numeros
double Calculadora::suma() {
    return this->x + this->y;
}

//La multiplicacion de dos numeros
double Calculadora::multiplica() {
    return this->x * this->y;
}

//La resta de dos numeros
double Calculadora::resta() {
    return this->x - this->y;
}

//La division de dos numeros
double Calculadora::divide() {
    return this->x / this->y;
}