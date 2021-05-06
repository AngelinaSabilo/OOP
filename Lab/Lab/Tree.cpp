#include "Tree.h"

void Tree::In_Data(ifstream& ifst) {
    ifst >> Age;
}

void Tree::Out_Data(string Name, ofstream& ofst) {
    ofst << "It's a tree with name: " << Name << endl;
    ofst << "Tree's age is " << Age << endl;
}

int Tree::Plant_consonant_letters(string Name) {
    string Constant_letter = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";

    int Amount = 0;

    for (int i = 0; i < Name.length(); i++) {
        for (int j = 0; j < Constant_letter.length(); j++) {
            if (Name[i] == Constant_letter[j]) {
                Amount++;
                break;
            }
        }
    }

    return Amount;
}