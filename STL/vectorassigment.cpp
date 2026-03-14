#include<iostream>
#include<vector>
#include<exception>
using namespace std;

class Student{
    private:
    int id;
    string name;
    int marks;

    public:
    // default constructor
    Student(){
        id=0;
        name="";
        marks=0;
    }

   

    void acceptData(){
        cout<<"Enter the id of student\n";
        cin>>id;
        cout<<"Enter the name of student\n";
        cin>>name;

     try{
        cout<<"Enter the marks of student\n";
        cin>>marks;

        if(marks<0 || marks>100){
          throw marks;
        }
    }
   
    catch(int m){
           cout<<" Invalid marks: Marks should be between 0 and 100\n";
           exit(1);
           cout<<"After exit";
     }

    }

    void display(){
        cout<<"Id of student is: "<<id<<endl;
        cout<<"Name of student is: "<<name<<endl;
        cout<<"Marks of student is: "<<marks<<endl;
    }

    int getid(){
        return id;
    }

    ~Student(){}
  
};

int main(){

 vector<Student> v;
 int n;
  int id;

 int choice;
 
 while(true){

        cout<<"\n------ MENU ------\n";
        cout<<"1. Add Students\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
 switch(choice){
    case 1:
     cout<<"Enter number of students: ";
            cin>>n;
        for(int i=0; i<n;i++){
        Student s;
      s.acceptData();
      v.push_back(s);
      }
      break;

      case 2:
       for(int i=0; i<v.size(); i++){
         v[i].display();
       }
       break;

       case 3:

       cout<<"Enter the id of student whose data you want to find:\n";
       cin>>id;
       //To find the studnet by id
         for(auto it = v.begin(); it != v.end(); it++){
            if(it->getid()==id){
                 it->display();
                 break;
  
                 }
            }
            break;

            case 4:
            cout<<"Enter the id of student whose data you want to delete:\n";
            cin>>id;

            //for deleting the data of student
            for(auto it = v.begin(); it != v.end(); it++){
            if(it->getid()==id){
       
                 v.erase(it);
                 cout<<"Student Deleted\n";
                 break;
                     }
                }
                 break;

            case 5:
                return 0;
            
            default:
             cout<<"invalid choice:";    



 }

 }
}