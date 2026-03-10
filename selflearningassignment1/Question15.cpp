#include<iostream>
using namespace std;

double power(double n, int p = 2)
{
    double result = 1;

    for(int i = 1; i <= p; i++)
    {
        result = result * n;
    }

    return result;
}

int main()
{
    double num;
    int pow;

    cout<<"Enter number: ";
    cin>>num;

    cout<<"Enter power (enter 0 to use default square): ";
    cin>>pow;

    if(pow == 0)
        cout<<"Result = "<<power(num)<<endl;
    else
        cout<<"Result = "<<power(num, pow)<<endl;

    return 0;
}