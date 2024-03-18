#include<iostream>
#include<vector>
#include<string>
#include<conio.h>

using namespace std;

class player 
{
    public :
    //attributes 
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){
        cout<<name<<" says"<<text_to_say<<endl;
    }
    bool is_dead();
};
class account
{
    public :
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double bal){
        balance +=bal;
        cout<<" In deposite  "<<balance<<endl;
    }
    bool withdraw(double bal){
        balance -= bal;
        cout<<" In withdraw "<<balance<<endl;
    }
    
};

int main(){
    account frank_account;
    frank_account.name =" Frank's account";
    frank_account.balance =5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk(" Hi there");

    player *enemy = new player;
    (*enemy).name = "enemy";
    (*enemy).health = 100;
    enemy ->xp = 15;

    enemy ->talk(" I will destroy you!");


    getch();
}