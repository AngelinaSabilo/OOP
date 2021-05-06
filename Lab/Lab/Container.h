#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"

//Структура "контейнер"
class Container {
    Node* Head; //Указатель на первый элемент контейнера
    int Len; //Количество элементов в контейнере
public:
    void In_Container(ifstream& ifst); //Функция ввода элементов в контейнер
    void Out_Container(ofstream& ofst); //Функция вывода контейнера
    void Clear_Container(); //Функция очистки контейнера
    void Out_Only_Tree(ofstream& ofst); //Функция вывода только деревьев
    Container(); //Конструктор
    ~Container() { Clear_Container(); } //Деструктор  
};

#endif // HEADER_H