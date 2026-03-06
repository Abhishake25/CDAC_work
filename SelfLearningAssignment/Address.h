#include<iostream>
using namespace std;

class Address{
    private:
    int houseno;
    string colony;
    string area;
    string city;
    int pincode;
   public:
    Address();
    Address(int houseno, string colony, string area, string city, int pincode);
    void accept();
     void display();
     //comparison operator overload function declaration

     bool operator==(const Address a);

     ~Address();
};