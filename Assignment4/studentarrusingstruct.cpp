// Create function for printing an array and call it from main (Student array)
#include<iostream>
using namespace std;

class Student{
    private:
    int roll;
    string name;
    float marks;

    public:

    void input(){
        cout<<"Enter roll no"<<endl;
        cin>>roll;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter marks"<<endl;
        cin>>marks;

    }

    void display(){
        cout<<"Roll no is: "<<roll<<endl;
        cout<<"Name is :"<<name<<endl;
        cout<<"Marks is :"<<marks<<endl;
    }
};

void printsarr(Student arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i].display();
    }
}

int main(){
    int n;
    cout<<"Enter the number of students";
    cin>>n;

    Student s[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter details of"<<i+1<<" Student"<<endl;
        s[i].input();
    }
  printsarr(s,n);

}