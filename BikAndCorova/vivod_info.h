#ifndef VIVOD_INFO_H_INCLUDED
#define VIVOD_INFO_H_INCLUDED

#include <string>

void vivod_privetstviya();//приветствие и правила игры

bool proverit_vvod(const std::string& popytka);//проверка ввода: 4 цифры, все уникальные; иначе вывод ошибки

void vivod_podskazki(int bik, int corov);//выводит подсказки, сколько быков и коров

void vivod_pobedy(const std::string& secret, int popytki);//поздравление с победой

std::string poluchit_vvod();//читаем строку от пользователя и возвращаем её

bool novaya_igra();//хочет ли пользователь сыграть ещё раз

#endif // VIVOD_INFO_H_INCLUDED
