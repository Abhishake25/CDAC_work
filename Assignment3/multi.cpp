#include<iostream>
using namespace std;

void multiply(int *arr,int n){
for(int i=0;i<n;i++){
 arr[i]=arr[i]*2;
}
for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
}

int main (){
int n;
cin>>n;
cout<<"enter the value for arr=";
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
multiply(arr,n);

return 0;
}
