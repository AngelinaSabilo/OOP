#ifndef TREE_H
#define TREE_H

#include "Plant.h"

//Класс "дерево"
class Tree : public Plant {
    long int Age; //Возраст дерева
public:
    void In_Data(ifstream& ifst); //Функция ввода дерева
    void Out_Data(string Name, ofstream& ofst); //Функция вывода дерева
    int Plant_consonant_letters(string Name); //Функция подсчета числа согласных букв в названии растения
    Tree() {};
};

#endif // TREE_H