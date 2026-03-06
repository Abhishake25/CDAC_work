#include "Address.h"

int main(){
    // Address arr[2];

    // for(int i = 0; i < 2; i++){
    //     arr[i].accept();
    // }
   
    // for(int i = 0; i < 2; i++){
    //     arr[i].display();
    // }

    Address a1(1,"state","pashan","pune",211);
    Address a2(2,"statebank","hinj","pune",411);
     a1.display();
     a2.display();
    if(a1==a2){
        cout<<"Address are same:"<<endl;
    }
    else{
        cout<<"Address are not same:"<<endl;
    }

      return 0;

}