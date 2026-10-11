#include "generator_chisla.h"
#include "poisk_bik_corov.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::string secret = "";
    int bik = 0, corov = 0;

    std::time_t t;
    std::time(&t);//записываем текущее unix время
    unsigned int st_time = static_cast<unsigned>(t);//явное преобразование t в целое число без знака, так как такой тип приимает srand, а не long long
    std::srand(st_time);//начало последовательности с st_time и каждый вызов будет выдовать следующее число в этой последовательности

    for (int i=0; i<5; ++i){
        secret = generirovat_chislo();
        std::cout << "secret=" <<secret<< "\n";
        poschitat_bik_corov(secret, "1234", bik, corov);
        std::cout<< "bik=" <<bik<< ", corov=" <<corov<< "\n";
    }


    return 0;
}
