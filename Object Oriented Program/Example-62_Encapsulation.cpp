#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class student
{
private :
    string name;
public :
    void setname(string x)
    {
        name = x;
    }
    string getname(){
        return name;
    }
};

int main(){
    student n1;
    n1.setname("The world is filled with kind of allah");
    cout<<n1.getname()<<endl;




getch();
    
}