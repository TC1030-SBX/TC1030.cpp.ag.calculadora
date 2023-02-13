#include "Calculadora.hpp"
#include <iostream>

int main()
{
    Calculadora c;
    double op1{0}, op2{0};

    std::cout << "Calculadora aritmetica\n";
    std::cout << "======================\n";

    std::cout << "Introduce el primer operando:";
    std::cin >> op1;

    std::cout << "Introduce el segundo operando:";
    std::cin >> op2;

    c.setX(op1);
    c.setY(op2);

    std::cout << c.getX() << "+" << c.getY() << "=" << c.suma() << "\n";
    std::cout << c.getX() << "-" << c.getY() << "=" << c.resta() << "\n";
    std::cout << c.getX() << "*" << c.getY() << "=" << c.multiplica() << "\n";
    std::cout << c.getX() << "/" << c.getY() << "=" << c.divide() << "\n";

    return 0;
}