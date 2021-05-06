#include "Shrub.h"

void Shrub::In_Data(ifstream& ifst) {
    string Month = "";

    ifst >> Month;

    if (Month == "Jenuary") {
        M = JENUARY;
    }
    else if (Month == "February") {
        M = FEBRUARY;
    }
    else if (Month == "March") {
        M = MARCH;
    }
    else if (Month == "April") {
        M = APRIL;
    }
    else if (Month == "May") {
        M = MAY;
    }
    else if (Month == "June") {
        M = JUNE;
    }
    else if (Month == "July") {
        M = JULY;
    }
    else if (Month == "August") {
        M = AUGUST;
    }
    else if (Month == "September") {
        M = SEPTEMBER;
    }
    else if (Month == "October") {
        M = OCTOBER;
    }
    else if (Month == "November") {
        M = NOVEMBER;
    }
    else if (Month == "December") {
        M = DECEMBER;
    }
}

void Shrub::Out_Data(string Name, ofstream& ofst) {
    ofst << "It's a shrub with name: " << Name << endl;
    ofst << "Shrub's flowering month is ";

    if (M == JENUARY) {
        ofst << "Jenuary";
    }
    else if (M == FEBRUARY) {
        ofst << "February";
    }
    else if (M == MARCH) {
        ofst << "March";
    }
    else if (M == APRIL) {
        ofst << "April";
    }
    else if (M == MAY) {
        ofst << "May";
    }
    else if (M == JUNE) {
        ofst << "June";
    }
    else if (M == JULY) {
        ofst << "July";
    }
    else if (M == AUGUST) {
        ofst << "August";
    }
    else if (M == SEPTEMBER) {
        ofst << "September";
    }
    else if (M == OCTOBER) {
        ofst << "October";
    }
    else if (M == NOVEMBER) {
        ofst << "November";
    }
    else if (M == DECEMBER) {
        ofst << "December";
    }

    ofst << endl;
}

int Shrub::Plant_consonant_letters(string Name) {
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