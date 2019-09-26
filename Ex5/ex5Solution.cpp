#include <iostream>


int main()
{
    int dollar = 62;
    
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    
    for(int rouble = 50; rouble <= 500; rouble += 10){
        std::cout << rouble << " рублей = " << double(rouble) / double(dollar) << " долларов" << std::endl;
    }

}