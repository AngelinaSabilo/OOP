#ifndef HEADER_H
#define HEADER_H

#include "Plant.h"

//Класс "цветок"
class Flower : public Plant {
    //Тип цветка
    enum Type {
        HOME,
        GARDEN,
        WILD
    };

    Type T; //Тип цветка
public:
    void In_Data(ifstream& ifst); //Функция ввода цветка
    void Out_Data(string Name, Habitation H, ofstream& ofst); //Функция вывода цветка
    Flower() {};
};

#endif // FLOWER_H