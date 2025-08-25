#include <iostream>
using namespace std;


int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        cout << "Math error" << endl;
        return 0;  
    }
    return a / b;
}

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else if (n < 0) {
        cout << "Factorial doesn't work for negative numbers" << endl;
    }
    else {
        return n * factorial(n - 1);
    }
}


int main() {
    int num;
    int num1, num2;

    do {
        cout << "\nChoose the Option." << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial" << endl;
        cout << "6. Exit" << endl;
        cin >> num;

        switch (num) {
        case 1:
            cout << "Enter the numbers to add: ";
            cin >> num1 >> num2;
            cout << "Result: " << addition(num1, num2) << endl;
            break;

        case 2:
            cout << "Enter the numbers to subtract: ";
            cin >> num1 >> num2;
            cout << "Result: " << subtraction(num1, num2) << endl;
            break;

        case 3:
            cout << "Enter the numbers to multiply: ";
            cin >> num1 >> num2;
            cout << "Result: " << multiplication(num1, num2) << endl;
            break;

        case 4:
            cout << "Enter the numbers to divide: ";
            cin >> num1 >> num2;
            cout << "Result: " << division(num1, num2) << endl;
            break;

        case 5:
            cout << "Enter the number to find it's factorial." << endl;
            cin >> num1;
            cout << "Result: " << factorial(num1) << endl;
            break;

        case 6:
            cout << "Exiting Calculator..." << endl;
            break;
        default:
            cout << "Please enter from given options (1-5)." << endl;
        }
    } while (num != 6);

    return 0;
}
