#include "vivod_info.h"
#include <iostream>
#include <set>


void vivod_privetstviya(){
    std::cout << "----Igra \"Byki i korovy\"----\n"
              << "Zagadano chislo iz 4 razlichnyh cifr\n"
              << "Posle kazhdoi popytki vy poluchite podskazku:\n"
              << " # \"bik\" - cifra na svoem meste \n"
              << " # \"korova\" - cifra est, no ne na svoem meste\n"
              << "Vvedite popytku (pologitelnoe chislo s 4 raznymi ciframi,\n"
              << "bez probelov, bez bykv, bez spec znakov, v odnu stroku):\n";
}
bool proverit_vvod(const std::string& popytka){
    bool ok = true;
    //проверка длины
    if (popytka.size()!=4){
        ok = false;
    } else {
        //проверка только цифры и собираем уникальные
        std::set<char> unikalnye;
        for (char c : popytka){
            if (c<'0' || c>'9'){
                ok = false;
                break;
            }
            unikalnye.insert(c);//собираем для проверки уникальности
        }
        //проверяем что все цифры разные/уникальные
        if (ok && unikalnye.size()!=4){
            ok = false;
        }
        if (ok && popytka[0]=='0'){
            ok = false;
        }
    }

    if (!ok){
        std::cout << "Oshibka: nuzhno vvesti 4 raznye cifry\n";
    }
    return ok;
}

void vivod_podskazki(int bik, int corov){
    std::cout << "bik=" << bik << ", korov=" << corov << "\n";
}

void vivod_pobedy (const std::string& secret, int popytki){
    std::cout << "POBEDA! Vy ugadali chislo " << secret << " za " << popytki << " popytok!\n";
}

std::string poluchit_vvod(){
    std::string popytka;
    std::cout << "Vvedite chislo> ";
    std::cin >> popytka;
    return popytka;
}

bool novaya_igra(){
    std::string otvet;
    std::cout << "Igrat eche raz? (Y/N): ";
    std::cin >> otvet;
    return otvet == "Y" || otvet == "y";
}
