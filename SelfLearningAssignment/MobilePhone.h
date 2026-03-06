#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include<iostream>
#include<string>
using namespace std;

class MobilePhone
{
private:
    int modelNo;
    float price;
    string manufacturer;
    int quantity;

public:
    MobilePhone();  // Default constructor
    MobilePhone(int, float, string, int); // Parameterized constructor

    void accept();
    void display();

    int getModel();
    int getQuantity();
};

#endif