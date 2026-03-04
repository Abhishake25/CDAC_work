#include<iostream>
using namespace std;

void arraySort(int *arr,int n){
int temp,i;
for(i=0; i<n-1; i++){
    for(int j=0;j<n-i-1;j++){
  
  if(arr[j]>arr[j+1]){
   temp = arr[j];
   arr[j] = arr[j+1];
   arr[j+1] = temp;
  }
  }
}

}

int maxsecmax(int *arr,int n){
cout<<"max :"<<arr[n-1]<<endl;
cout<<" secmax :"<<arr[n-2]<<endl;
return 0;
}
int minsecmin(int *arr){
cout<<"min :"<<arr[0]<<endl;
cout<<" secmin :"<<arr[1]<<endl;
return 0;
}



int main(){
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;

int arr[n];
for(int i = 0; i < n; i++){
cin>>arr[i];
}
arraySort(arr,n);
maxsecmax(arr,n);
minsecmin(arr);
return 0;
}

