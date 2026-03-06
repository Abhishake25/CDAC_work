#include "Payslip.h"

int main(){
    Payslip arr[2];

    for(int i = 0; i < 2; i++){
        arr[i].accept();
    }
   
    for(int i = 0; i < 2; i++){
        arr[i].display();
    }

    // Payslip a1(1,"state",100,200,300);
    // Payslip a2(2,"statebank",200,300,500);
    //  a1.display();
    //  a2.display();
   
      return 0;

}