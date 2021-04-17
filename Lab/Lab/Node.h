#ifndef NODE_H
#define NODE_H

#include "Plant.h"

//Структура "узел контейнера"
struct Node {
    Node* Next; //Указатель на следующий элемент контейнера (узел)
    Plant* Cont; //Указатель на растение
};

#endif // NODE_H