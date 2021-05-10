#include "Tree.h"

void Tree::In_Data(ifstream& ifst) {
    ifst >> Age;
}

void Tree::Out_Data(string Name, Habitation H, ofstream& ofst) {
    ofst << "It's a tree with name: " << Name << endl;
    ofst << "Tree's age is " << Age << endl;
    ofst << "Tree's habitation is ";

    if (H == TUNDRA) {
        ofst << "Tundra";
    }
    else if (H == DESERT) {
        ofst << "Desert";
    }
    else if (H == STEPPE) {
        ofst << "Steppe";
    }
    else if (H == TAIGA) {
        ofst << "Taiga";
    }

    ofst << endl << endl;
}

void Tree::Out_Only_Tree(string Name, Habitation H, ofstream& ofst) {
    Out_Data(Name, H, ofst);
}