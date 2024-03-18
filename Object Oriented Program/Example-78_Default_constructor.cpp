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
    void set_name(string val){
        name =val;
    }
    int get_name(){
       // return name;
        return health;
        return xp;
    }
    player(){
        name ="Mr.hero";
        health = 100;
        xp = 15;
        cout<<"Name is none"<<endl;
    }
    player(string name_val,int health_val,int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }

};

int main(){
    //default constructor work without constructor
    /*
    player hero;
    hero.set_name("Hero");
    cout<<hero.get_name()<<endl;
    */
   /*
   //no arg constructor
    player ob;
    cout<<ob.get_name()<<endl;
    */  
    player hero;
    cout<<hero.get_name()<<endl;
    player ob2("Md.james",150,30);
    cout<<ob2.get_name()<<endl;
    
    return 0;
}