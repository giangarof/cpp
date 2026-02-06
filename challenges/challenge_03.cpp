// Write a function called calculator that takes in 2 numbers and an operator and returns the result of the calculation.
#include <iostream>
#include <string>
using namespace std;

void calculator(int a, int b, char op){
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Invalid operator";
        break;
    }
}


int main(){
    calculator(10,3,'-');

    return 0;
}