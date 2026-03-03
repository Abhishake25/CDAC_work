//Wap to check whether the given character is small letter or Capital letter
//Here we are using the ascii values
#include<iostream>
using namespace std;

void letterChecker(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"The character you have entered is Capital letter"<<endl;
    }

    if(ch >= 'a' && ch <= 'z'){
        cout<<"The character you have entered is small letter"<<endl;
    }
}

int main(){
    char ch;
    cout<<"Please enter the character you want to check"<<endl;
    cin>>ch;

    letterChecker(ch);
    return 0;
}