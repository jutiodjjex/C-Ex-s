#include <iostream>
#include <random>

//Определяем начисление кол-ва очков за попадание
int getScore(int getShotRange){
    
    switch(getShotRange){
        case 1:
        return 10;
        break;
        
        case 2:
        return 8;
        break;
        
        case 3:
        return 6;
        break;
        
        case 4:
        return 4;
        break;
        
        case 5:
        return 2;
        break;
        
        default:
        break;
    }
    
}

int main()
{
    
    int summaryScore = 0; //Инициализируем изначальные баллы
    std::random_device r; //Берём независимый seed из железа компьютера
    
    // Выбираем случайное число от 1 до 6, потому что у нас всего 5 кругов в мишени, а 6 - не попал.
    std::default_random_engine targetCircles(r()); //Выбираем стандартный рандомайзер
    std::uniform_int_distribution<int> uniform_dist(1, 6); //Выбираем рендж цифр, в данном случае от 1 до 6
    
    for(int i = 1; i < 4; i++){
    int tempShotScore = getScore(uniform_dist(targetCircles));
    summaryScore += tempShotScore;
    std::cout << "Score for " << i << " shot is: " << tempShotScore << std::endl;
    
    }
    
    std::cout << "Your score: " << summaryScore << std::endl;
    
    return 0;
}
