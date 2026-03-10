#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    
    // ofstream fout;
    // fout.open("student.txt");

    // fout<<"Hello Abhishek, This is file handling";

    // fout.close();


    ifstream fin("student.txt");
     char ch;

     int vowelcount=0;
     int consonantcount=0;


     while(fin.get(ch)){
        //you can also use isalpha() here inbuilt function to check whether the character is alphabet or not
     if((ch>='A' && ch<'Z') || (ch>='a' && ch<='z') || (ch==' ')){
        cout<<ch;
          
       //we have to check only characters not spaces`````````````````````````````````````````````````````````````````````````````````````````````````
        if((ch>='A' && ch<'Z') || (ch>='a' && ch<='z')){
            char c = tolower(ch);
 
             //after we found the character we check whether it is consonant or vowel
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vowelcount++;
            }
            else{
                consonantcount++;
            }
        }
     }
     else{
        break;
     }
    }

    cout<<"\nVowels: "<<vowelcount<<endl;
    cout<<"Consonants: "<<consonantcount<<endl;
     fin.close();
}