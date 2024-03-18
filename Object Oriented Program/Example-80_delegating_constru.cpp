#include<iostream>
#include<string>

using namespace std;
class player 
{
    private :
    string name;
    int health;
    int xp;
    public :
    
    player();
    player(string name_val);
    player(string name_val,int health_val,int xp_val);



};

 player::player()
    : player{"none",0,0}{
        cout<<"No, arg constructor"<<endl;
    }
player::player(string name_val)
    :player{name_val,0,0}{
        cout<<"One ,arg constructor"<<endl;
    }
    //constructor initialization
player::player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
         cout<<"Three, arg constructor"<<endl;
    }

int main(){
    player empty;
    player frank{"frank"};
    player hero{"villan",100,55};    

    return 0;
}