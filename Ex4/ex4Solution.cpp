#include <iostream>


int main()
{
    bool integerSolved = false;
    
    int usersInteger;
    int integerToSolve = 47;
    
    do{
        std::cout << "Введите число: " << std::endl;
        std::cin >> usersInteger;
        
        if(usersInteger == integerToSolve){
            std::cout << "Вы угадали число." << std::endl;
            integerSolved = true;
        } else {
            
            if(usersInteger < integerToSolve){
                std::cout << "Введённое число меньше загаданного, попробуйте ещё раз." << std::endl;
            } else {
                std::cout << "Введённое число больше загаданного, попробуйте ещё раз." << std::endl;
            }
            
        }
    }
    while(!integerSolved);

}