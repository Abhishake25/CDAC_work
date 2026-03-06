#include "Address.h"

Address:: Address(){
    houseno = 1;
    colony = "";
    city = "";
    area = "";
    pincode = 0;
}

Address:: Address(int houseno,string colony, string city, string area, int pincode){
    this->houseno = houseno;
    this->colony = colony;
    this->city = city;
    this->area = area;
    this->pincode = pincode;
}

void Address:: accept(){
    cout<<"Enter the house no"<<endl;
    cin>>houseno;
    cout<<"Enter the colony"<<endl;
    cin>>colony;
    cout<<"Enter the area"<<endl;
    cin>>area;
    cout<<"Enter the city"<<endl;
    cin>>city;
    cout<<"Enter the pincode"<<endl;
    cin>>pincode;

}

void Address:: display(){
    cout<<"House no is: "<<houseno<<endl;
    cout<<"Colonyis: "<<colony<<endl;
    cout<<"Area is: "<<area<<endl;
    cout<<"city is: "<<city<<endl;
    cout<<"Pincode is: "<<pincode<<endl;
}

bool Address:: operator==(const Address a){
    return(houseno==a.houseno && colony==a.colony && city==a.city && area==a.area && pincode==a.pincode);
}

Address:: ~Address(){

}