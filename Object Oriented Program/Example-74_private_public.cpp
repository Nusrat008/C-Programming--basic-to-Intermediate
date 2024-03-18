#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class ac
{
private :
    string name{"Mr.james"};
    double health;
public :
    void set_name(string n){
       
        cout<<name<<" say that "<<n<<endl;;
    }
    double get_num(double h){
        health =h;
        cout<<" My health cost per week  "<<health<<endl;
    }
     
};



int main(){
    ac person;
    person.set_name(" I want to be a programmer");
    person.get_num(98.78);
 
    getch();
}