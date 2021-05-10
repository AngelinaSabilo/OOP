#ifndef HEADER_H
#define HEADER_H

#include "Plant.h"

//����� "������"
class Flower : public Plant {
    //��� ������
    enum Type {
        HOME,
        GARDEN,
        WILD
    };

    Type T; //��� ������
public:
    void In_Data(ifstream& ifst); //������� ����� ������
    void Out_Data(string Name, Habitation H, ofstream& ofst); //������� ������ ������
    Flower() {};
};

#endif // FLOWER_H