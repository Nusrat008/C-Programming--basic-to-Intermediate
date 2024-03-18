#include<iostream>
#include<string>

using namespace std;
class player 
{
    private :
    string name{"Xxxxxx"};
    int health;
    int xp;
    public :
    
    player();
    player(string name_val);
    player(string name_val,int health_val,int xp_val);
    
    void setter(string n,int h,int xp){
        name = n;
        health = h;
        xp = xp;
    }
    string getter(){
        return name;
    }
    int get(){
        return health;
        
    }
    int get_xp(){
        return xp;
    }


};

 player::player()
    : name{"none"},health{0},xp{0}{
    }
player::player(string name_val)
    :name{name_val},health{0},xp{0}{
    }
    //constructor initialization
player::player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
    }

int main(){
    player ob;
    player frank{"Frank"};
    player hero{"hero",100,55};

    cout<<ob.getter()<<endl;
    cout<<frank.getter()<<endl;
    cout<<hero.getter()<<endl;
    
    cout<<hero.get()<<endl;
    cout<<hero.get_xp()<<endl;
    

    return 0;
}