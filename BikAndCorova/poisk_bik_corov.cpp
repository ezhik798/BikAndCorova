#include "poisk_bik_corov.h"

void poschitat_bik_corov(const std::string& secret,
                         const std::string& popytka,
                         int& bik,
                         int& corov) {
    bik = 0;
    corov = 0;
    for (int i=0; i<4; ++i){
        if (secret[i]==popytka[i]){
            ++bik;
            //цифра бык, сразу к следущей цифре
            continue;
        }
        for (int j=0; j<4; ++j){
            //числа в secret и popytka не повтор€ютс€ гарантировано
            if (i!=j && secret[j]==popytka[i]) {
                ++corov;
            }
        }
    }


}
