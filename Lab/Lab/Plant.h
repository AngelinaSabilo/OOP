#ifndef PLANT_H
#define PLANT_H

#include <fstream>

using namespace std;

//Класс "растение"
class Plant {
    string Name; //Название растения
public:
    string Get_Name(); //Функция получения названия растения

    static Plant* In_Plant(ifstream& ifst); //Функция вывод растения
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода растения,
                                              //она будет определена каждого класса растения
    virtual void Out_Data(string Name, ofstream& ofst) = 0; //Чисто вирутальная функция вывода растения,
                                              //она будет определена каждого класса растения
    virtual int Plant_consonant_letters(string Name) = 0; //Функция подсчета числа согласных букв в названии растения
protected:
    Plant() {};
};

#endif // PLANT_H