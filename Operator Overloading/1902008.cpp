#include<iostream>
#include<string>

using namespace std;

class Regular
{
public:

    string name;
    string address;
    int nid;
    int phone;
    int bill_date;
    int unit;

    void set_address();
    void show_address();
    int bill_calc();

};
void Regular::set_address()
{
    cout<<"Enter Name,address,nid ,phone number and Bill date: "<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<"Address: ";
    cin>>address;
    cout<<"NID: ";
    cin>>nid;
    cout<<"Phone: ";
    cin>>phone;
    cout<<"Bill date: ";
    cin>>bill_date;
    cout<<"Enter unit: "<<endl;
    cin>>unit;

}
int Regular::bill_calc()
{
   int bill;
    if(unit<=100)
    {
      bill = unit*5*30;
    }
    else if(unit>100)
    {
      bill = (100*5 *30)+ ((unit-100)*7);
    }
    return bill;
}
void Regular::show_address()
{
    cout<<"---------------"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"NID: "<<nid<<endl;
    cout<<"Phone: "<<phone<<endl;
    cout<<"Bill date: "<<bill_date<<endl;
    cout<<"Monthly bill: "<<bill_calc()<<endl;
}

class premium:public Regular
{

public:
    int prepaid_bal;
    int dit_meter_id;

    void set_premium();
    void show_address_premium();
    int bill_calc_pre();
};

void premium::set_premium()
{
    set_address();
    cout<<"Enter prepaid balance amount: "<<endl;
    cin>>prepaid_bal;
    cout<<"Enter digital meter id: "<<endl;
    cin>>dit_meter_id;
}

void premium::show_address_premium()
{
    show_address();
    cout<<"Prepaid balance: "<< prepaid_bal<<endl;
    cout<<"digital meter id: "<<dit_meter_id<<endl;

    int total_bill = bill_calc() - bill_calc()*0.05;
    cout<<"Premium user bill: "<<total_bill<<endl;

}

int main()
{
    premium ob1;

    ob1.set_premium();
    ob1.show_address_premium();

    return 0;
}
