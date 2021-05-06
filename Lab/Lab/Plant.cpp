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