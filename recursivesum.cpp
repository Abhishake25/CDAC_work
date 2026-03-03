#include<iostream>
using namespace std;

//This function first checks base condition then call for recursion
int recursiveSum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + recursiveSum(n - 1);
    }
}

int main(){
    int n;
    cout<<"Enter the number whose recursive sum you want to find"<<endl;
    cin>>n;

    cout<<recursiveSum(n); //here we are calling the function
    return 0;
}

