#include<iostream>
#include<cstring>

using namespace std;

class Regular
{
public:
    int len;
    int len_a;

    char name[90];
    char address[90];
    int nid;
    int phone;
    int bill_date;
    int unit;

    Regular(char *n,char *a,int ND,int ph,int date,int u);
    void show_address();
    int bill_calc();

};

Regular::Regular(char *n,char *a,int ND,int ph,int date,int u)
{
    cout<<"Enter bill"<<endl;
    len =strlen(n);
    n = new char[len+1];
    if(!n){cout<<"allocation error"<<endl;
     exit(1);
    }
    strcpy(name,n);

    len_a =strlen(a);
    a = new char[len_a+1];
    if(!a){cout<<"allocation error"<<endl;
     exit(1);
    }
    strcpy(address,a);

    nid = ND;
    phone = ph;
    bill_date = date;
    unit = u;

}
int Regular::bill_calc()
{
    int bill;
    if(unit<=100)
    {
      bill = unit*5;
    }
    else if(unit>100)
    {
      bill = 100*5 + (unit-100)*7;
    }
    return bill;
}
void Regular::show_address()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"NID: "<<nid<<endl;
    cout<<"Phone: "<<phone<<endl;
    cout<<"bill date: "<<bill_date<<endl;

}

class premium:public Regular
{

public:
    int prepaid_bal;
    int dit_meter_id;
    int unit;

    void set_pre(int p,int id);
    int bill_calc_pre();
    void show_address_premium();

};
void premium::set_pre(int p,int id)
{
    prepaid_bal = p;
    dit_meter_id = id;

}
int premium::bill_calc_pre()
{
    int bill;
    if(unit<=100)
    {
      bill = unit*5;
    }
    else if(unit>100)
    {
      bill = 100*5 + (unit-100)*7;
    }
    return  bill-bill*0.05;
}
void premium::show_address_premium()
{
    cout<<"Prepaid balance: "<< prepaid_bal<<endl;
    cout<<"digital meter id: "<<dit_meter_id<<endl;

}

int main()
{
    Regular ob1("Jhon","Ctg",235,45699,12,80);

    ob1.show_address();;

    cout<<"Bill is : "<<ob1.bill_calc()<<endl;




    return 0;
}
