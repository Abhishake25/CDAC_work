#include<iostream>
using namespace std;

class Payslip{
    private:
    int empno;
    string empname;
    int da;
    int hra;
    int basicsalary;
   public:
    Payslip();
    Payslip(int empno, string empname, int da, int hra, int basicsalary);
    void accept();
    void salary();
     void display();
     

     ~Payslip();
};