#include<iostream>
using namespace std;

//Function to search for an element and return its index
int searchArray(int *arr, int size, int ele){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == ele){
            cout<<"The element is found at "<<i<<endl;
            return i;
        }
    }
       cout<<"You want to delete element that is not present in array"<<endl;
        return -1;
        
    
}

void deleteEle(int *arr, int size, int index){
 //now after find the element in the array now we want to delete it by putting the next element in place of it
    for(int i = index; i < size-1; i++) {
        arr[i] = arr[i+1];
    }

    //now we want to print the resulting array
    cout<<"The resulting array is: ";
    for(int i = 0; i < size-1; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size,ele;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array"<<endl;

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to delete"<<endl;
    cin>>ele;

    int index = searchArray(arr,size,ele);
    deleteEle(arr,size,index);
   
    return 0;
}