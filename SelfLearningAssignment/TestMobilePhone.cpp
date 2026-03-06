#include "MobilePhone.h"

int main()
{
    MobilePhone m[50];
    int count = 0;
    int choice;
    int searchModel;

    do
    {
        cout<<"\n---- Mobile Shop Menu ----\n";
        cout<<"1. Add Mobile\n";
        cout<<"2. Display Mobiles\n";
        cout<<"3. Find Quantity\n";
        cout<<"4. Check Availability\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {

        case 1:
            m[count].accept();
            count++;
            break;

        case 2:
            for(int i=0;i<count;i++)
            {
                m[i].display();
            }
            break;

        case 3:
            cout<<"Enter Model Number: ";
            cin>>searchModel;

            for(int i=0;i<count;i++)
            {
                if(m[i].getModel()==searchModel)
                {
                    cout<<"Quantity: "<<m[i].getQuantity()<<endl;
                }
            }
            break;

        case 4:
        {
            bool found=false;

            cout<<"Enter Model Number: ";
            cin>>searchModel;

            for(int i=0;i<count;i++)
            {
                if(m[i].getModel()==searchModel)
                {
                    cout<<"Mobile Available\n";
                    found=true;
                    break;
                }
            }

            if(!found)
            cout<<"Mobile Not Available\n";

            break;
        }

        }

    }while(choice!=5);

}