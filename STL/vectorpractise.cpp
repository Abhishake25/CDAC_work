#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" "<<endl;
        
    // }

    //print vector using iterator
    // vector<int>::iterator it;
    // for(it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" "<<endl;
    // }

    //print vector in reverse order
    // vector<int>::reverse_iterator it; //you have to use a reverse iterator here
    // for(it = v.rbegin(); it != v.rend(); it++){
    //     cout<<*it<<" "<<endl;
    // }

    //we can avoid the iterator type mistake using auto
    // for(auto it = v.rbegin(); it != v.rend(); it++){
    //     cout<<*it<<" "<<endl;
    // }

    //now we are going to find the element in vector using algorithm find
        //  int x;
        //  cout<<"Enter the element you want to find\n";
        //  cin>>x;
         
        //  auto it = find(v.begin(),v.end(),x);

        //  if(it != v.end()){
        //     cout<<"Element found\n";
        //  }
        //  else{
        //     cout<<"Element not found\n";
        //  }

         //insert an element in vector
         v.insert(v.begin()+2,77);
         v.insert(v.begin()+3,45);
         v.insert(v.begin()+4,66);
         v.insert(v.begin()+5,86);

         //to delete the element
         v.erase(v.begin()+3);
         v.erase(v.begin()+4);

         //to sort the vector
         sort(v.begin(),v.end());

         //to find the maximum element
         auto it = max_element(v.begin(),v.end());
         cout<<*it<<endl;

         for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
         }

       cout<<"\n"<<v.size()<<endl;
        cout<<v.capacity();
}