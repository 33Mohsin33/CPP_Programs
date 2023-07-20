#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero.\n";
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2;
    char choice;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> choice;

    int result;
    switch (choice) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            cout << "Invalid choice\n";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
