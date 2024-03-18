#include<iostream>
#include<string>
using namespace std;

class account 
{
    private :
    double balance;
    public :
    void set_bal(double bal);
    double get_bal();

    bool deposite(double amount);
    bool withdraw(double amount);
};
void account :: set_bal(double bal){
    balance = bal;
}
double account :: get_bal(){
    return balance;
}
bool account :: deposite(double amount){
    balance +=amount;
    return true;
}
bool account :: withdraw(double amount){
    if((balance -amount)>0){
    balance -=amount;
    return true;
    }
    else {
        return false;
    }

}

int main(){
    account my_bank;
    my_bank.set_bal(4000.0);

    if(my_bank.deposite(500.0)){
        cout<<" My deposite is ok"<<endl;
    }
    else {
        cout<<"Deposite not Ok"<<endl;
    }


    if(my_bank.withdraw(200)){
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