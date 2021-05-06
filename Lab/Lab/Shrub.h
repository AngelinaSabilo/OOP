#ifndef SHRUB_H
#define SHRUB_H

#include "Plant.h"

//Класс "кустарник"
class Shrub : public Plant {
    //Месяц цветения
    enum Month {
        JENUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    Month M; //Месяц цветения
public:
    void In_Data(ifstream& ifst); //Функция ввода кустарника
    void Out_Data(string Name, Habitation H, ofstream& ofst); //Функция вывода кустарника
    Shrub() {};
};

#endif // SHRUB_H