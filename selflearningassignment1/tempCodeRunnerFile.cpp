#include<iostream>
using namespace std;

class Student{
    private:
    //m1,m2,m3 are marks of student
    int m1;
    int m2;
    int m3;

    public:
    Student(){
        cout<<"Default constructor is called"<<endl;
        m1=0;
        m2=0;
        m3=0;
    }
    Student(int m1,int m2, int m3){
        cout<<"Parameteized constructor is called"<<endl;
      this->m1 = m1;
      this->m2 = m2;
      this->m3 = m3;
    }

    void getData(){
        cout<<"Enter the marks 1 of student "<<endl;
        cin>>m1;
        cout<<"Enter the marks 2 of student "<<endl;
        cin>>m2;
        cout<<"Enter the marks 3 of student "<<endl;
        cin>>m3;
    }

    void result(){
        if(m1 >= 50 && m2 >= 50 && m3 >= 50){
            cout<<"You are passed"<<endl;
        }
        else{
            cout<<"You are fail"<<endl;
        }
    }

    ~Student(){
        cout<<"Destructor is called"<<endl;
    }
 
};

int main(){
    int size;
    int count = 0;
    cout<<"for how many students you want to enter data"<<endl;
    cin>>size;
    Student **s = new Student*[size];

    for(int i=0; i<size; i++){
        s[i] = new Student;
        s[i]->getData();
        count++;
    }

    cout<<"You have entered the data of "<<count<<" students"<<endl;
    //Display the resut
    for(int i=0; i<count; i++){
        s[i]->result();
    }

    //Deallocate the memory
    for(int i=0; i<count; i++){
        delete s[i];
    }

    delete[] s;

    return 0;
}