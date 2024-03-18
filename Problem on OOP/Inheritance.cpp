#include<iostream>
using namespace std;

//Base class
class player
{
protected:
    int a;

public:
    void set_match(int x);
    void disp_match();
};
void player::set_match(int x)
{
    a=x;
}

void player::disp_match()
{
    cout<<"Total Match ="<<a<<endl;
}

//Derived class
class score: public player
{
    int b,p;

public:
    void set_result(int x,int y);
    void disp_result();
    void total_score();
};
void score::set_result(int x,int y)
{
    set_match(x);
    b=y;
}

void score::disp_result()
{
    disp_match();
    cout<<"Score per Match ="<<b<<endl;
}

void score::total_score()
{
    p=b*a;
    cout<<"Total Score: "<<p<<endl;
}


int main()
{
     score ob;

    ob.set_result(5,80);


    ob.disp_result();
    ob.total_score();

    return 0;
}
