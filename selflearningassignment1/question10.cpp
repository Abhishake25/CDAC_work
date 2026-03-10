//Menu driven program to check whether the number is what?

#include<iostream>
using namespace std;

bool primenumber(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<num;i++){
        if(num%i==0){
            return false;
        }
         return true;
    }
    
   
}

void oddevennumber(int num){
    if(num==0){
        cout<<"Number is neither odd nor even"<<endl;
    }
   else if(num%2==0){
        cout<<" Number is even"<<endl;
    }
    else{
    cout<<"Number is odd"<<endl;
    }
}

void posnegnumber(int num){
    if(num==0){
        cout<<"Number is positive"<<endl;
    }
   else if(num>=1){
        cout<<" Number is positive"<<endl;
    }
    else{
    cout<<"Number is negative"<<endl;
    }
}
int main(){
   int choice,number;
   
    do{
     cout<<"---Menu Displayed-----"<<endl;
     cout<<"----1.Prime number or not----"<<endl;
     cout<<"----2.Odd or Even----"<<endl;
     cout<<"----3.Positive or Negative----"<<endl;
     cout<<"----4.Exit----"<<endl;

    
      cout<<"Enter the choice:"<<endl;
       cin>>choice;
   
    
    cout<<"Enter the number you want to check"<<endl;
    cin>>number;

    switch (choice)
    {
    case 1:
        if (primenumber(number)){
            cout<<"Number is Prime"<<endl;
        }
        else{
            cout<<"Number is not Prime"<<endl;
        }
        break;
    
    case 2:
         oddevennumber(number);
         break;

    case 3:
         posnegnumber(number);
         break;

    case 4:
         exit;
         break;
    default:
        cout<<"You have enter a invalid choice\n";
        break;
    }

   }while(choice!=4); 

}