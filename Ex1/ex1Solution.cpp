#include <iostream>

double getY(double x, double a){
    
    return (1 - x + a) / (2 - ((x - a) / (3 - (x - a))));
}

int main()
{
    double variableX = 2.3;
    double variableA = 16.00;
    
    //Таким способом можно было бы задать значения переменных из консоли
    //std:cout << "Введите значение переменной A";
    //std::cin >> variableA;
    //std:cout << "Введите значение переменной X";
    //std::cin >> variableX;
    
    double resultY = getY(variableX, variableA);
    
    std::cout<< resultY << std::endl;

    return 0;
    //Функция main() возвращает значение 0 в том случае, если это значение не задано программно.
}