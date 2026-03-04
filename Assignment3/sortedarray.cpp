#include<iostream>
using namespace std;
void arraySort(int arr[5]){
int temp,i;
for(i=0; i<4; i++){
    for(int j=0;j<5-i-1;j++){
  
  if(arr[j]>arr[j+1]){
   temp = arr[j];
   arr[j] = arr[j+1];
   arr[j+1] = temp;
  }
  }
}
  
  cout<<"sorted array =:" ; 
  for(i=0; i<5; i++){
   cout<<arr[i]<<" ";
  }

}


int main(){

int arr[5] = {5,4,3,2,1};

 arraySort(arr);  //call
 
 }