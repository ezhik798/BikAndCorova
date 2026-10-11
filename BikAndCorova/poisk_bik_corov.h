#ifndef POISK_BIK_COROV_H_INCLUDED
#define POISK_BIK_COROV_H_INCLUDED

#include <string>
//считаем быков и коров при сравнениее secret (загаданное число) и popytka
//результат записываем в bik и corov (по ссылке)
void poschitat_bik_corov(const std::string& secret,
                         const std::string& popytka,
                         int& bik,
                         int& corov);
// int& функция изменяет оригинальные переменные, без & функция работала бы с копиями и изменения не дошли бы до оригинала
// std::string& чтобы не копировать строки так как мы их только читаем
// const защита от случайной записи

#endif // POISK_BIK_COROV_H_INCLUDED
