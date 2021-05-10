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

void Flower::Out_Data(string Name, ofstream& ofst) {
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

    ofst << endl << endl;
}