#ifndef PLANT_H
#define PLANT_H

#include <fstream>

using namespace std;

//Среда обитания
enum Habitation {
    TUNDRA, //Тундра
    DESERT, //Пустыня
    STEPPE, //Степь
    TAIGA //Тайга
};

//Класс "растение"
class Plant {
    string Name; //Название растения
    Habitation H; //Среда обитания
public:
    string Get_Name(); //Функция получения названия растения
    Habitation Get_Habitation(); //Функция получения среды обитания

    static Plant* In_Plant(ifstream& ifst); //Функция вывод растения
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода растения,
                                              //она будет определена каждого класса растения
    virtual void Out_Data(string Name, Habitation H, ofstream& ofst) = 0; //Чисто вирутальная функция вывода растения,
                                              //она будет определена каждого класса растения
    int Plant_consonant_letters(); //Функция подсчета числа согласных букв в названии растения
    bool Compare(Plant& Other); //Функция сравнения числа согласных букв в названиях растений
protected:
    Plant() {};
};

#endif // PLANT_H