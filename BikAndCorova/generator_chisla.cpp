#include "generator_chisla.h"
#include <cstdlib> //rand()
#include <set>

std::string generirovat_chislo() {
    std::string chislo = "";
    std::set<char> ispolzovannye;

    char pervaya_cifra = '1' + rand()%9;
    ispolzovannye.insert(pervaya_cifra);
    chislo += pervaya_cifra;

    while (chislo.size()<4) {
        char a = '0' + rand()%10;
        if (ispolzovannye.find(a) == ispolzovannye.end()){
            ispolzovannye.insert(a);
            chislo += a;
        }
    }
    return chislo;
}
