#include<iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float bill = 0;

    cout<<"Enter user name: ";
    cin>>name;

    cout<<"Enter units consumed: ";
    cin>>units;

    if(units <= 100)
    {
        bill = units * 5.5;
    }
    else if(units <= 300)
    {
        bill = (100 * 5.5) + (units - 100) * 7.25;
    }
    else
    {
        bill = (100 * 5.5) + (200 * 7.25) + (units - 300) * 8.75;
    }

    // Minimum charge
    if(bill < 60)
        bill = 60;

    // Surcharge
    if(bill > 750)
        bill = bill + bill * 0.10;

    cout<<"\nName: "<<name<<endl;
    cout<<"Units Consumed: "<<units<<endl;
    cout<<"Total Bill: "<<bill<<endl;

    return 0;
}