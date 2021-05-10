#include "Tree.h"
#include "Shrub.h"
#include "Flower.h"

string Plant::Get_Name() {
    return Name;
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