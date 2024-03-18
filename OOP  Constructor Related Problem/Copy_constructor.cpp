#include<bits/stdc++.h>

#include<string>

using namespace std;

class player
{
private:
    string name;
    int health;
    int xp;
public:
    string get_name() { return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}

    player(string name_val = "None",int health_val = 0,int xp_val  = 0);

    //copy constructor
    player(const player &oj);

    //Destructor
    ~player(){cout<<"Destructor called for."<<name<<endl;}
};
player::player(string name_val ,int health_val ,int xp_val)
        :name{name_val},health{health_val},xp{xp_val}{
            cout<<"Three - args constructor for " + name<<endl;
}
player::player(const player &oj)
        :name(oj.name),health(oj.health),xp(oj.xp){
            cout<<"Copy constructor - made copy of ::: "<<oj.name<<endl;
            cout<<" "<<oj.health<<"  "<<oj.xp<<endl;
}

//function  
void display_player(player p){
    cout<<"Name : "<<p.get_name()<<endl;
    cout<<"Health : "<<p.get_health()<<endl;
    cout<<"Xp : "<<p.get_xp()<<endl;
}

int main(){
    //  player empty;
    player frank{"Raihan",80,20};
   player cp{frank};
   display_player(frank);
    // player hero{"villan",34,100};


    return 0;
}