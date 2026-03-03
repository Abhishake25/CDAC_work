#include<iostream>
#include<cstring>

using namespace std;

class Student{

private:
 int id;
 char name[100];
 int age;
 char addr[100];
 
 public:
 
  Student(){
  
  cout<<"Inside the default constructor"<<endl;
  id = 0;
  name[0] = '\0';
  age = 0;
  addr[0] = '\0';
  }
  
  Student(int id, const char nm[10], int age, const char address[10]){
  
  cout<<"Inside the parameterized constructor"<<endl;
  this->id = id;
  strcpy(name, nm);
  this->age = age;
  strcpy(addr, address);
  
  }
  
  // setter function
  void setId(int id){
  this->id = id;
  }
  
  void setName(const char nm[10]){
  strcpy(name,nm);
  }
  
  void setAge(int age){
  this->age = age;
  }
  
  void setAddress(const char address[10]){
  strcpy(addr,address);
  }
  
  //getter function
  int getId(){
  return id;
  }
  
  char * getName(){
  return name;
  }
  
  int getAge(){
  return age;
  }
  
  char * getAddress(){
  return addr;
  }
  
  //display function
  void display(){
  
  cout<<"ID is: "<<id<<endl;
  cout<<"Name is: "<<name<<endl;
  cout<<"Age is: "<<age<<endl;
  cout<<"Address is: "<<addr<<endl;
  
}
  
};

int main(){
  // cout<<sizeof(Student);
  Student s,s1(1,"Kansikh",24,"Shamli");
  // cout<<sizeof(Student);
 s.display();
 s1.display();
 return 0;

}
