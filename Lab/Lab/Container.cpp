#include "Container.h"

Container::Container() {
    Head = new Node();
    Head->Cont = NULL;
    Head->Next = NULL;
}

void Container::In_Container(ifstream& ifst) {
    Node* Temp_Node = Head;

    while (!ifst.eof()) {
        if ((Temp_Node->Cont = Plant::In_Plant(ifst))) {
            Temp_Node->Next = new Node();
            Temp_Node = Temp_Node->Next;
            Len++;
        }
    }
}

void Container::Out_Container(ofstream& ofst) {
    ofst << "Container contains " << Len
        << " elements." << endl << endl;

    Node* Temp_Node = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp_Node->Cont->Out_Data(Temp_Node->Cont->Get_Name(), ofst);

        ofst << "Amount of consonant letters in the name of plant = " <<
            Temp_Node->Cont->Plant_consonant_letters(Temp_Node->Cont->Get_Name()) << endl << endl;

        Temp_Node = Temp_Node->Next;
    }
}

void Container::Clear_Container() {
    for (int i = 0; i < Len; i++) {
        free(Head->Cont);
        Head = Head->Next;
    }

    Len = 0;
}

void Container::Sort() {
    if (Len > 1) {
        Node* First = Head;
        Node* Second = Head->Next;

        Node* Temp = new Node;

        while (First->Next && First->Next->Next) {
            while (Second && Second->Next) {
                if (First->Cont->Compare(*Second->Cont)) {
                    Temp->Cont = First->Cont;
                    First->Cont = Second->Cont;
                    Second->Cont = Temp->Cont;
                }

                Second = Second->Next;
            }

            First = First->Next;
            Second = First->Next;
        }
    }
}