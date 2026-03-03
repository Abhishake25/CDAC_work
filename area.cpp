#include<iostream>
using namespace std;
 int rectangle( int len,int br){
    int area=len*br;
    return area;
 }
  int square  (int side){
 int area=side*side;
 return area;

 }
 double circle( int r){
   double area=3.141*r*r;
   return area;

 
}

int main() {

    int choice;
    cout << "Select the shape" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Square" << endl;
    cin >> choice;

    if (choice == 1) {
        int length, breadth;
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle = " 
             << rectangle(length, breadth);

    } else if (choice == 2) {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " 
             << circle(r);

    } else if (choice == 3) {
        int side;
        cout << "Enter side: ";
        cin >> side;
        cout << "Area of Square = " 
             << square(side);

    } else {
        cout << "Invalid choice";
        }


    return 0;
}