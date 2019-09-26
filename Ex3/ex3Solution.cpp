#include <iostream>


void coordCheck(int variableX, int variableY){
    
    if(variableX >= 0 || variableY >= 0){
        
        if(variableX >= 0 && variableY >= 0){
            std::cout<< "2";
        }else{
            std::cout<< "4";
        }
        
    } else {
        
        if(variableX <= 0 && variableY <= 0){
            std::cout<< "3";
        }else{
            std::cout<< "1";
        }
        
    }
    
}


void zeroPointCheck(int variableX, int variableY){
    
    if(variableX == 0 && variableY == 0){
        std::cout<< "0";
    } else {
        coordCheck(variableX, variableY);    
    }
}

int main()
{
    
    int variableX;
    int variableY;
    
    std::cin>> variableX;
    std::cin>> variableY;
    
    zeroPointCheck(variableX, variableY);

}