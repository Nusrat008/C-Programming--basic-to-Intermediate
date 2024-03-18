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
    void set_name(string name_val){
        name = name_val;
    }
    string get_name() const{
        return name;
    }
    player(string name_val,int h_val,int xp_val);
        
};
player::player(string name_val,int h_val,int xp_val)
        :name{name_val},health{h_val},xp{xp_val}{
    }
void display_player_name(const player &p){
    cout<<p.get_name()<<endl;
}

int main(){
    const player hero{"superior hero",19,80};
  //  hero.set_name("super hero");
    cout<<hero.get_name()<<endl;
    player villain{"super on villain",100,89};

    display_player_name(villain);
    display_player_name(hero);

    return 0;
}