#include "operation.h"
#include <iostream>
using namespace std;
int main() {
    double number1, number2;
    char operation;
    char next;
    do {
        cout << "Enter first number: ";
        cin >> number1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> number2;

        double result;

        switch (operation) {
            case '+':
                result = add(number1, number2);
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = sub(number1, number2);
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = multiply(number1, number2);
                cout << "Result: " << result << endl;
                break;
            case '/':
                result = div(number1, number2);
                (number2 == 0)?  cout << "Error: Cannot divide by zero!" << endl: cout << "result is:" <<result << endl;


                break;
            default:
                cout << "Unknown operator!" << endl;
                continue;
        }



        cout << "Do you want continue? (y/n): ";

        cin >> next;
    } while (next != 'n');

    cout << "Good bye" << endl;

    return 0;
}