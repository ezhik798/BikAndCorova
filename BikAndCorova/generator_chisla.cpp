#include "generator_chisla.h"
#include <cstdlib> //rand()
#include <set>

std::string generirovat_chislo() {
    std::string chislo = "";//итоговая строка
    std::set<char> ispolzovannye;//уже сипользованные цифры

    char pervaya_cifra = '1' + rand()%9;//первая цифра от 1 до 9
    ispolzovannye.insert(pervaya_cifra);//запоминаем
    chislo += pervaya_cifra;//добавляем

    while (chislo.size()<4) {//пока число не длинее 4
        char a = '0' + rand()%10;//цифра от 0 до 9
        //если цифры не было - добавляем
        //find() возвращает итератор; end() означает "не найдено" совпадений - норм
        if (ispolzovannye.find(a) == ispolzovannye.end()){
            ispolzovannye.insert(a);
            chislo += a;
        }
    }
    return chislo;
}
