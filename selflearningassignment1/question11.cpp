#include<iostream>
#include<cstring>
using namespace std;

void reverse(char str[])
{
    int len = strlen(str);

    for(int i = len - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    char str[100];

    cout<<"Enter a line: ";
    cin.getline(str,100);

    cout<<"Reversed string: ";
    reverse(str);

    return 0;
}