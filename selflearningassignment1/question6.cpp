#include<iostream>
using namespace std;

class Donor
{
public:
    int dno;
    string name, address, sex, bloodgroup;
    int age;

    void accept()
    {
        cout<<"Enter Donor Number: ";
        cin>>dno;

        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Age: ";
        cin>>age;

        cout<<"Enter Address: ";
        cin>>address;

        cout<<"Enter Sex (M/F): ";
        cin>>sex;

        cout<<"Enter Blood Group: ";
        cin>>bloodgroup;
    }

    void display()
    {
        cout<<"Donor No: "<<dno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<endl;
    }
};

int main()
{
    Donor d[10];
    int n, choice;

    cout<<"Enter number of donors: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details of donor "<<i+1<<endl;
        d[i].accept();
    }

    do
    {
        cout<<"\nMENU"<<endl;
        cout<<"1. Blood group O+"<<endl;
        cout<<"2. Age between 18 and 25"<<endl;
        cout<<"3. Female donors with blood group A (age 21-24)"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\nDonors with blood group O+\n";
                for(int i=0;i<n;i++)
                {
                    if(d[i].bloodgroup=="O+")
                        d[i].display();
                }
                break;

            case 2:
                cout<<"\nDonors age between 18 and 25\n";
                for(int i=0;i<n;i++)
                {
                    if(d[i].age>=18 && d[i].age<=25)
                        d[i].display();
                }
                break;

            case 3:
                cout<<"\nFemale donors with blood group A age 21-24\n";
                for(int i=0;i<n;i++)
                {
                    if(d[i].sex=="F" && d[i].bloodgroup=="A" && d[i].age>=21 && d[i].age<=24)
                        d[i].display();
                }
                break;
        }

    }while(choice!=4);

    return 0;
}