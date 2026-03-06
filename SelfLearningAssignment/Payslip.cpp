#include "Payslip.h"

Payslip:: Payslip(){
    empno = 1;
    empname = "";
    da= 0;
    hra = 0;
    basicsalary = 0;
}

Payslip:: Payslip(int empno,string empname, int da, int hra, int basicsalary){
    this->empno = empno;
    this->empname = empname;
    this->da = da;
    this->hra = hra;
    this->basicsalary = basicsalary;
}

void Payslip:: accept(){
    cout<<"Enter the empno"<<endl;
    cin>>empno;
    cout<<"Enter the empname"<<endl;
    cin>>empname;
    cout<<"Enter the hra"<<endl;
    cin>>hra;
    cout<<"Enter the da"<<endl;
    cin>>da;
    cout<<"Enter the basicsalary"<<endl;
    cin>>basicsalary;

}

 void Payslip:: salary(){
    int finalsalary = hra + da + basicsalary;
    cout<<"Final Salary is: "<<finalsalary<<endl;
 }

void Payslip:: display(){
    cout<<"empno is: "<<empno<<endl;
    cout<<"empnameis: "<<empname<<endl;
    cout<<"hra is: "<<hra<<endl;
    cout<<"da is: "<<da<<endl;
    cout<<"basicsalary is: "<<basicsalary<<endl;
    salary();
}


Payslip:: ~Payslip(){

}