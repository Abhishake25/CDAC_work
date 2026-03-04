#include<iostream>
using namespace std;


int characterCount(char *arr,int n,char ch){

int count = 0;

for(int i =0; i<n; i++){

 if(arr[i]==ch){
 count++;
 
 }
 
}
return count;

}


int main(){
int n;
cin>>n;
char arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
char ch;
cout<<"Enter the character to be search in the array"<<endl;
cin>>ch;

cout<<characterCount(arr,n,ch);
return 0;
}
