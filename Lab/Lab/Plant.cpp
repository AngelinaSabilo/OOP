#include "Tree.h"
#include "Shrub.h"

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