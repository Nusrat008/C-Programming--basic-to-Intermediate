#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
//#include<iostream>
//#include "account.cpp"


class account{
    private :
    double balance;

    public :
    void set_bal(double bal){
        balance = bal;
    }
    double get_bal(){
        return balance;
    }
    bool deposite(double amount);
    bool withdraw(double amount);
};
#endif