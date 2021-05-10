#include "Flower.h"

void Flower::In_Data(ifstream& ifst) {
    string Type = "";

    ifst >> Type;

    if (Type == "Home") {
        T = HOME;
    }
    else if (Type == "Garden") {
        T = GARDEN;
    }
    else if (Type == "Wild") {
        T = WILD;
    }
}

void Flower::Out_Data(string Name, Habitation H, ofstream& ofst) {
    ofst << "It's a flower with name: " << Name << endl;
    ofst << "Flower's type is ";

    if (T == HOME) {
        ofst << "Home";
    }
    else if (T == GARDEN) {
        ofst << "Garden";
    }
    else if (T == WILD) {
        ofst << "Wild";
    }

    ofst << endl;

    ofst << "Flower's habitation is ";

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