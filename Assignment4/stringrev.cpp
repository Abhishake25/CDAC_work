// Reverse string (char array) with recursion

#include<iostream>
using namespace std;

 void revstring(char name[], int size){
    
    if(size<0){
        return;
    }
    else{
         cout<<name[size]<<" ";
        return revstring(name,size-1); 
          
    }

}

int main(){
    
    char name[5] = {'a','k','a','s','h'};

    // for(int i = 0; i < 5; i++){
    //     cout<<name[i]<<" ";
    // }
    revstring(name,4);
   return 0;

}