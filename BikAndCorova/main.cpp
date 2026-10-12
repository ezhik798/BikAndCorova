#include "generator_chisla.h"
#include "poisk_bik_corov.h"
#include "vivod_info.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    std::time_t t;
    std::time(&t);//записываем текущее unix время
    unsigned int st_time = static_cast<unsigned>(t);//явное преобразование t в целое число без знака, так как такой тип приимает srand, а не long long
    std::srand(st_time);//начало последовательности с st_time и каждый вызов будет выдовать следующее число в этой последовательности

    vivod_privetstviya();


    do{
        std::string secret = generirovat_chislo();
        int popytki = 0;
        int bik = 0, corov = 0;

        while (bik != 4){
            std::string popytka = poluchit_vvod();

            if (proverit_vvod(popytka)){
                ++popytki;
                poschitat_bik_corov(secret, popytka, bik, corov);
                vivod_podskazki(bik, corov);
            }
        }

        vivod_pobedy(secret, popytki);
    }while(novaya_igra());


    return 0;
}
