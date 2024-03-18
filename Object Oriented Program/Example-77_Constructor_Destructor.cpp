#include<iostream>
#include<string>

using namespace std;
class player {
private :
    string name;

    public :
    void set_name(string name_val){
        name = name_val;
    }
    //overloaded constructor
    player(){
        cout<<"No args constructor called"<<endl;
    }
    player(string name){
        cout<<"string arg constructor called"<<endl;
    }
    player(string name,double xp,int health){
        cout<<"string, double, integer are 3 arg constructor called"<<endl;
    }
    //destructor
    ~player(){
        cout<<"Destructor call for "<<name<<endl;
    }

};

int main(){
    player name;
    name.set_name("slayer");

    player frank("New");
    frank.set_name("New");

    player arg("bangle",500.0,70);
    arg.set_name("bangle");

    player *enemy = new player;
    enemy ->set_name("enemy");

    player *boss = new player("Level boss",100.00,90);
    boss ->set_name("Level boss");

    delete enemy;
    delete boss;

    return 0;
}
