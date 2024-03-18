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
    player(string name_val ={"none"},int health_val = 0,int xp_val=0);


};
player :: player(string name_val,int health_val,int xp_val)
        : name{name_val},health{health_val},xp{xp_val}
{
    cout<<"Three ,args constructor "<<endl;

}

int main(){
    player empty;
    player frank{"frank"};
    player hero{"hero",100};
    player villan{"villan",100,55};


    return 0;
}
