#include "generator_chisla.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::time_t t;
    std::time(&t);
    unsigned int st_time = static_cast<unsigned>(t);
    std::srand(st_time);

    for (int i=0; i<5; ++i){
        std::cout << generirovat_chislo() << "\n";
    }
    return 0;
}
