#include "Tree.h"
#include "Shrub.h"

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
    else {
        return 0;
    }

    ifst >> P->Name;

    P->In_Data(ifst);

    return P;
}

bool Plant::Compare(Plant& Other) {
    return Plant_consonant_letters(Name) > Other.Plant_consonant_letters(Other.Get_Name());
}