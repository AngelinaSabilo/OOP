#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include "Plant.h"

//��������� "���������"
class Container {
    Node* Head; //��������� �� ������ ������� ����������
    int Len; //���������� ��������� � ����������
public:
    void In_Container(ifstream& ifst); //������� ����� ��������� � ���������
    void Out_Container(ofstream& ofst); //������� ������ ����������
    void Clear_Container(); //������� ������� ����������
    void Sort(); //������� ���������� ����������
    void Out_Only_Tree(ofstream& ofst); //������� ������ ������ ��������
    Container(); //�����������
    ~Container() { Clear_Container(); } //����������  
};

#endif // HEADER_H