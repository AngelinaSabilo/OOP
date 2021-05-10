#ifndef PLANT_H
#define PLANT_H

#include <fstream>

using namespace std;

//����� ��������
enum Habitation {
    TUNDRA, //������
    DESERT, //�������
    STEPPE, //�����
    TAIGA //�����
};

//����� "��������"
class Plant {
    string Name; //�������� ��������
    Habitation H; //����� ��������
public:
    string Get_Name(); //������� ��������� �������� ��������
    Habitation Get_Habitation(); //������� ��������� ����� ��������

    static Plant* In_Plant(ifstream& ifst); //������� ����� ��������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ��������,
                                              //��� ����� ���������� ������� ������ ��������
    virtual void Out_Data(string Name, Habitation H, ofstream& ofst) = 0; //����� ����������� ������� ������ ��������,
                                              //��� ����� ���������� ������� ������ ��������
    int Plant_consonant_letters(); //������� �������� ����� ��������� ���� � �������� ��������
    bool Compare(Plant& Other); //������� ��������� ����� ��������� ���� � ��������� ��������
protected:
    Plant() {};
};

#endif // PLANT_H