#include<iostream>
using namespace std;

class Stock
{
    int stockLevel;
    float unitPrice;

public:

    void setValues(int s, float p)
    {
        stockLevel = s;
        unitPrice = p;
    }

    int getStockLevel()
    {
        return stockLevel;
    }

    float getUnitPrice()
    {
        return unitPrice;
    }

    void receipt(int qty)   // add stock
    {
        stockLevel = stockLevel + qty;
        cout<<"Stock updated. Current stock: "<<stockLevel<<endl;
    }

    void issue(int qty)     // remove stock
    {
        if(qty <= stockLevel)
        {
            stockLevel = stockLevel - qty;
            cout<<"Stock issued. Current stock: "<<stockLevel<<endl;
        }
        else
        {
            cout<<"Not enough stock available."<<endl;
        }
    }
};

int main()
{
    Stock s;
    int choice, qty, stock;
    float price;

    cout<<"Enter initial stock level: ";
    cin>>stock;

    cout<<"Enter unit price: ";
    cin>>price;

    s.setValues(stock, price);

    do
    {
        cout<<"\nMENU"<<endl;
        cout<<"1. Display Stock Details"<<endl;
        cout<<"2. Receive Stock"<<endl;
        cout<<"3. Issue Stock"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Stock Level: "<<s.getStockLevel()<<endl;
                cout<<"Unit Price: "<<s.getUnitPrice()<<endl;
                break;

            case 2:
                cout<<"Enter quantity received: ";
                cin>>qty;
                s.receipt(qty);
                break;

            case 3:
                cout<<"Enter quantity issued: ";
                cin>>qty;
                s.issue(qty);
                break;
        }

    }while(choice != 4);

    return 0;
}