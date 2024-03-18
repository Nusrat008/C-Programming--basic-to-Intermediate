#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    account my_bank;
    my_bank.set_bal(4000.0);

    if(my_bank.deposite(500.0)){
        cout<<" My deposite is ok"<<endl;
    }
    else {
        cout<<"Deposite not Ok"<<endl;
    }


    if(my_bank.withdraw(200.00)){
        cout<<" Yeap! My withdraw is Good  : ";
        cout<<my_bank.get_bal()<<endl;
    }
    else{
        cout<<" Sorrow ,Withdraw not ok"<<endl;
    }

    if(my_bank.withdraw(5000)){
        cout<<" Yeap! My withdraw is Good  "<<endl;
    }
    else{
        cout<<" Sorrow ,Withdraw not ok"<<endl;
    }


    return 0;
}