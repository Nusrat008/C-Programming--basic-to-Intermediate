#include<iostream>

using namespace std;

class Base
{
private:
    int value;
public:
    Base():value{0}{cout<<"Base no-args constructor"<<endl;}
    Base(int x):value{x}){cout<<"Base(int) overloaded constructor"<<endl;}
    ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived:public Base
{
private:
    int doubled_value;
public:
    Derived():doubled_value{0}{cout<<"Derived on args constructor"<<endl;}
    Derived(int x):doubled_vlaue{x*2}{cout<<"Derived overloaded constructor"<<endl}
    ~Derived(){cout<<"Derived destructor"<<endl;}
};

int main()
{
    Base b();
    Base b(100);
    Derived d();
    Derived d(200);
    return 0;
}
