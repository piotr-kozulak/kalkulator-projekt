//
// Created by Piotr on 18.06.2024.
//

#include <iostream>
using namespace std;
double add(double liczba1, double liczba2) {
    return liczba1 + liczba2;
}

double sub(double liczba1, double liczba2) {
    return liczba1 - liczba2;
}

double multiply(double liczba1, double liczba2) {
    return liczba1 * liczba2;
}

double div(double liczba1, double liczba2) {
    if (liczba2 == 0)
        cout << "Error: Cannot divide by zero!" << endl;
    {


    }
    return liczba1 / liczba2;
}