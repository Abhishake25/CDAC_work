//In this program we will find the factorial of a number and then print the sum of the factorials from 1 to n.

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1)
    return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"size of factorial"<<endl;
    cin>>n;
  // cout<< factorial(n);
    for(int i=n;i>0;i--){
    cout<<factorial(i)<<" ";
}

return 0;
}