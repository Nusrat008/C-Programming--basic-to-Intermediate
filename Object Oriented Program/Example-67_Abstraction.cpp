#include<iostream>
#include<conio.h>

using namespace std;
class mobileuser 
{
    public :
    void call()
    {
        cout<<"Hello !"<<endl;
    }
    virtual void sendmessage() = 0;

};
class rahim : public mobileuser
{
    public : 
    void sendmessage()
    {
        cout<<" Hi , this is rahim"<<endl;
    } 
};
class karim : public mobileuser
{
    public :
    void sendmessage()
    {
        cout<<" Hi, this is karim "<<endl;
    }
};

int main(){

    mobileuser *m;

    rahim r;
    karim k;

    m = &r;
    m -> call();
    m ->sendmessage();

    m = &k;
    m ->sendmessage();

    getch();


    getch();
}
