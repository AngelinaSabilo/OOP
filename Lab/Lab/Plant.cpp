#include "Tree.h"
#include "Shrub.h"
#include "Flower.h"

string Plant::Get_Name() {
    return Name;
}

Habitation Plant::Get_Habitation() {
    return H;
}

Plant* Plant::In_Plant(ifstream& ifst) {
    Plant* P;
    int K;

    ifst >> K;
    if (K == 1) {
        P = new Tree;
    }
    else if (K == 2) {
        P = new Shrub;
    }
    else if (K == 3) {
        P = new Flower;
    }
    else {
        return 0;
    }

    ifst >> P->Name;

    string Habitant = "";

    ifst >> Habitant;

    if (Habitant == "Tundra") {
        P->H = TUNDRA;
    }
    else if (Habitant == "Desert") {
        P->H = DESERT;
    }
    else if (Habitant == "Steppe") {
        P->H = STEPPE;
    }
    else if (Habitant == "Taiga") {
        P->H = TAIGA;
    }

    P->In_Data(ifst);

    return P;
}

int Plant::Plant_consonant_letters() {
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

bool Plant::Compare(Plant& Other) {
    return Plant_consonant_letters() > Other.Plant_consonant_letters();
}

void Plant::Out_Only_Tree(string Name, Habitation H, ofstream& ofst) {
    ofst << endl;
}