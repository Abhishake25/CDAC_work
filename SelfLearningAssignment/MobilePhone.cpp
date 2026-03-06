#include "MobilePhone.h"

// Default Constructor
MobilePhone::MobilePhone()
{
    modelNo = 0;
    price = 0;
    manufacturer = "";
    quantity = 0;
}

// Parameterized Constructor
MobilePhone::MobilePhone(int m, float p, string manu, int q)
{
    modelNo = m;
    price = p;
    manufacturer = manu;
    quantity = q;
}

// Accept Function
void MobilePhone::accept()
{
    cout<<"Enter Model Number: ";
    cin>>modelNo;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"Enter Manufacturer: ";
    cin>>manufacturer;

    cout<<"Enter Quantity: ";
    cin>>quantity;
}

// Display Function
void MobilePhone::display()
{
    cout<<"Model No: "<<modelNo<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Manufacturer: "<<manufacturer<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"---------------------"<<endl;
}

// Getter functions
int MobilePhone::getModel()
{
    return modelNo;
}

int MobilePhone::getQuantity()
{
    return quantity;
}