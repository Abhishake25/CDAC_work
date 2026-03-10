#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0;
    int count = 0;
    float average;

    // Input 5 grades
    cout<<"Enter 5 grades (0 - 100):"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>marks[i];

        sum = sum + marks[i];

        if(marks[i] < 65)
        {
            count++;
        }
    }

    // Calculate average
    average = sum / 5.0;

    // Output results
    cout<<"Average marks = "<<average<<endl;
    cout<<"Number of marks less than 65 = "<<count<<endl;

    return 0;
}