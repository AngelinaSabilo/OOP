#ifndef SHRUB_H
#define SHRUB_H

#include "Plant.h"

// ласс "кустарник"
class Shrub : public Plant {
    //ћес€ц цветени€
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

    Month M; //ћес€ц цветени€
public:
    void In_Data(ifstream& ifst); //‘ункци€ ввода кустарника
    void Out_Data(string Name, ofstream& ofst); //‘ункци€ вывода кустарника
    int Plant_consonant_letters(string Name); //‘ункци€ подсчета числа согласных букв в названии растени€
    Shrub() {};
};

#endif // SHRUB_H