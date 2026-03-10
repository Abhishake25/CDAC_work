//calculate simple interest and compound interest
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double P, R, T;
    double SI, CI, amount;

    cout<<"Enter Principal amount: ";
    cin>>P;

    cout<<"Enter Rate of interest: ";
    cin>>R;

    cout<<"Enter Time (in years): ";
    cin>>T;

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    amount = P * pow((1 + R/100), T);
    CI = amount - P;

    cout<<"\nSimple Interest = "<<SI<<endl;
    cout<<"Compound Interest = "<<CI<<endl;

    return 0;
}