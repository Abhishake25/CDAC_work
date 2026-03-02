#include <iostream>
#include<math.h>
using namespace std;

//program to find the roots of equation

void roots(int a, int b, int c){
int D;
double root1, root2;
D = (b * b) - (4 * a * c);

if(D>0){
    root1 = (-b + sqrt(D))/2*a;
    root2 = (-b - sqrt(D))/2*a;
    
    cout<<root1<<" "<<root2<<endl;
}

else if(D==0){
    root1 = -b/2*a;
    root2 = root1;
    
    cout<<root1<<" "<<root2<<endl;
}

else if(D<0){
    root1 = (-b + sqrt(-D))/2*a;
    root2 = (-b - sqrt(-D))/2*a;
    
    cout<<root1<<" "<<root2<<endl;
}

}


int main() {
	
  int a,b,c;
  cout<<"Enter the value of a, b and c"<<endl;
  cin>>a>>b>>c;
  
  roots(a,b,c);
  
  return 0;
}
