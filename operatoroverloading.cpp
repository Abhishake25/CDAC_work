#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
     
    public:
    Complex(){
        cout<<"Default Constructor Called"<<endl;
        real = 0;
        imag = 0;
    }
     public:
    Complex(int real, int imag){
        cout<<"Parameterized Constructor Called"<<endl;
        this->real = real;
        this->imag = imag;
    }
void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
       
    }
    Complex(Complex &c);
    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);

};

Complex::Complex(Complex &c){
    this->real = c.real;
    this->imag = c.imag;
}

//overload the plus operator
    Complex Complex::operator+(const Complex &c){ 
        cout<<"operator + function is called"<<endl;;  //c is nothing but a reference name for c2 object
        Complex temp(0,0);                     //temp is created to store the result of real and imag part addition

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    //overload the - operator
    Complex Complex::operator-(const Complex &c){ 
        cout<<"operator - function is called"<<endl;;  //c is nothing but a reference name for c2 object
        Complex temp(0,0);                     //temp is created to store the result of real and imag part addition

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }

    


int main(){
    Complex c1(5,3);
    Complex c2(3,6);
    Complex c3;
    c3 = c1+c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    

    return 0;
}