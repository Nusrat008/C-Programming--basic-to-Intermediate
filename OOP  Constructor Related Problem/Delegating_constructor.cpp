#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

class player
{
private:
    string name;
    int health;
    int xp;
public:
    player();
    player(string name_val);
    player(string name_val,int health_val,int xp_val);
};

// no -args constructor   :  3-args constructor = delegate constructor
player::player()
        :player{"None",0,0}{
            cout<<"No - args constructor"<<endl;
            //cout<<"For default"<<endl;
        }

player::player(string name_val)
        :player{name_val,0,0}{
            //cout<<"Number of two"<<endl;
            cout<<"One - args constructor"<<endl;
        }

player::player(string name_val,int health_val,int xp_val)
        :name{name_val},health{health_val},xp{xp_val}{
            cout<<"Three - args constructor"<<endl;
            //cout<<"My delegate"<<endl;
        }


int main(){

    player empty;
    player frank{"Frank"};
    player herro{"herro",100,90};

    return 0;
}