#include <iostream>

using namespace std;

// Function to perform the operation
double calculate(double num1, double num2, char op) {
    double result;
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator" << endl;
            result = 0;
            break;
    }
    return result;
}

// Main function
int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result = calculate(num1, num2, op);

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
