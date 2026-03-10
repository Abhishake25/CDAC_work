#include<iostream>
using namespace std;

void acceptdata(int **arr,int row,int col){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter row "<<i<<" col "<<j<<endl;
            cin>>arr[i][j];
        }
    }
}

void displaydata(int **arr,int row,int col){
    cout<<" Inside display"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transposedata(int **arr,int row,int col){
    cout<<"Matrix after transpose is:"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row,col;
    cout<<"Enter the size of row"<<endl;
    cin>>row;
    cout<<"Enter the size of col"<<endl;
    cin>>col;

    int **arr = new int*[row];

    for(int i=0; i<row; i++){
      arr[i] = new int[col];
    }
    acceptdata(arr,row,col);
    displaydata(arr,row,col);
    transposedata(arr,row,col);

    for(int i=0; i<row; i++){
        cout<<"Delete operator is called"<<endl;
        delete[] arr[i];
    }
    delete[] arr;

}