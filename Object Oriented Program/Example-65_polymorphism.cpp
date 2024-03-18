#include<iostream>
#include<conio.h>

using namespace std;

class person
{
    public : 
    virtual void display(){
        cout<<" I am   bangladenshi ,I proud of my country"<<endl;
    }

};
class student : public person
{
    public : 
     void display(){
        cout<<" I am a student of bangladensh"<<endl;
    }

};
class teacher : public person
{
    public : 
     void display(){
        cout<<" I am a teacher of bangladensh,I like teaching"<<endl;
    }

};

int main(){
    student s;
    teacher t;
    person *p;
    person p1;
    p1.display();

    p = &s;
    p -> display();

    p = &t;
    p -> display();

    getch();
}
