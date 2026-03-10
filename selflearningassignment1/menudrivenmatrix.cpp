#include <iostream>
using namespace std;

class Matrix{
    private:
    int value;
    // int row;
    // int col;

    public:
    Matrix(){
        // row = 0;
        // col = 0;
    }
    // Matrix(int row,int col){
    //   this->row = row;
    //   this->col = col;
    // }

    void acceptdata(){
        cout<<"Enter the data for matrix";
        cin>>value;
        
    }

    void display(){
        cout<<value<<" ";
    }

    Matrix operator+(const Matrix &ma){
        Matrix temp;
        
        temp.value = value + ma.value;
        return temp;
            
    }
        Matrix operator-(const Matrix &ma){
        Matrix temp;
        
        temp.value = value - ma.value;
        return temp;
            
    }


    
    ~Matrix(){

    }
};

int main(){
    int row,col;
    cout<<"Enter the number of rows and cols"<<endl;
    cin>>row>>col;

    Matrix **m = new Matrix*[row];
    Matrix **m2 = new Matrix*[row];
    Matrix **m3 = new Matrix*[row];

    //for matrix 1
    for(int i=0; i<row; i++){
      m[i] = new Matrix[col];
       m2[i] = new Matrix[col];
       m3[i] = new Matrix[col];
    }
    
    cout<<"Enter data for matrix 1:"<<endl;
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               m[i][j].acceptdata();
            }
        }

    //for matrix 2


    cout<<"Enter data for matrix 2:"<<endl;
    for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               m2[i][j].acceptdata();
            }
        }

        
    //   //result matrix after addition
    //   for(int i=0; i<row; i++){
    //         for(int j=0; j<col; j++){
    //            m3[i][j] = m[i][j] + m2[i][j];
    //         }
    //     }

    //     //result matrix display
    //     cout<<"The resultant Matrix after addition is:"<<endl;
    //      for(int i=0; i<row; i++){
    //         for(int j=0; j<col; j++){
    //            m3[i][j].display();
    //         }
    //         cout<<endl;
    //     }

    //result matrix after subtraction
      for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               m3[i][j] = m[i][j] - m2[i][j];
            }
        }

        //result matrix display
        cout<<"The resultant Matrix after addition is:"<<endl;
         for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
               m3[i][j].display();
            }
            cout<<endl;
        }

    return 0;
}