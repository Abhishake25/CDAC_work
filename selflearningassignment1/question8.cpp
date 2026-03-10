#include<iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout<<"Enter operand 1: ";
    cin>>num1;

    cout<<"Enter operand 2: ";
    cin>>num2;

    cout<<"Enter operation (+, -, *, /): ";
    cin>>op;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            cout<<"The result of "<<num1<<" + "<<num2<<" is "<<result;
            break;

        case '-':
            result = num1 - num2;
            cout<<"The result of "<<num1<<" - "<<num2<<" is "<<result;
            break;

        case '*':
            result = num1 * num2;
            cout<<"The result of "<<num1<<" * "<<num2<<" is "<<result;
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                cout<<"The result of "<<num1<<"/"<<num2<<" is "<<result;
            }
            else
            {
                cout<<"Division by zero is not allowed.";
            }
            break;

        default:
            cout<<"Invalid operator!";
    }

    return 0;
}