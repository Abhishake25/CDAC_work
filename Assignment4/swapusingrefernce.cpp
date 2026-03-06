#include<iostream>
using namespace std;

//here we are swap variables using refernce not pointers
//reference are just alias name of variable
void swapref(int &x, int &y){
int temp;

 temp = x;
 x = y;
 y = temp;

 cout<<"The value after swapping is:"<<x<<" "<<y<<endl;

    
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;

    swapref(a,b);
    return 0;
}