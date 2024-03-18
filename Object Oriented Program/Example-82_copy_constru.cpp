#include<iostream>
#include<string>

using namespace std;
class player 
{
private :
    string name;
    int health ;
    int xp;
public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    player(string name_val ="none",int health_val = 0,int xp_val = 0);
    player(const player &source);
    ~player(){cout<<"Destructor called for: "<<name<<endl;}
};
player :: player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}
{
    cout<<"Three -args constructor for "<<name<<endl;
}
player ::player(const player &source)
    :name{source.name},health{source.health},xp{source.xp}
{
    cout<<"Copy constructor -made copy of: "<<name<<endl;

}
void display_player(player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"xp: "<<p.get_xp()<<endl;
}

int main(){

//    player empty{"xxxxx",800,550};
//    player my_new_object{empty};
//    display_player(empty);

    player frank("frank",90,160);
    display_player(frank);

    player hero("hero",88,170);
    display_player(hero);

    return 0;
}