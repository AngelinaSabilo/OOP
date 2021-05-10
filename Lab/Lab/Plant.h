#ifndef PLANT_H
#define PLANT_H

#include <fstream>

using namespace std;

//����� "��������"
class Plant {
    string Name; //�������� ��������
public:
    string Get_Name(); //������� ��������� �������� ��������

    static Plant* In_Plant(ifstream& ifst); //������� ����� ��������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ��������,
                                              //��� ����� ���������� ������� ������ ��������
    virtual void Out_Data(string Name, ofstream& ofst) = 0; //����� ����������� ������� ������ ��������,
                                              //��� ����� ���������� ������� ������ ��������
    int Plant_consonant_letters(); //������� �������� ����� ��������� ���� � �������� ��������
    bool Compare(Plant& Other); //������� ��������� ����� ��������� ���� � ��������� ��������
protected:
    Plant() {};
};

#endif // PLANT_H