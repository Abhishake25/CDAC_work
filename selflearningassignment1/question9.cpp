#include<iostream>
using namespace std;

class Time{
private:
int hr;
int min;
int sec;
public:
Time(){
     hr=0;
     min=0;
     sec=0;
}
Time(int h,int m,int s){

    hr=h;
    min=m;
    sec=s;
}
Time operator-(const Time t1){
Time temp;
temp.hr=this->hr-t1.hr;
temp.min=this->min-t1.min;
temp.sec=this->sec-t1.sec;
return temp;

}
void display(){
cout<<"hour :"<< this->hr<<endl;
cout<<"minute :"<< this->min<<endl;
cout<<"second:"<< this->sec<<endl;
}
bool operator==(const Time &t){
return (hr==t.hr&& min==t.min&& sec==t.sec);

}


~Time(){

}




};


int main(){
    Time t1(6,3,5);
    Time t2(5,6,5);
    Time t3;
    t3=t1-t2;//
    t3.display();
    if(t1==t2){
    cout<<"equal"<<endl;
}
    else{
        cout<<"unequal"<<endl;
    }




    return 0;
}