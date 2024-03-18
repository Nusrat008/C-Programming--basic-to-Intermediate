#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class person
{
    int id;
    public :
    string name;
    int age;
    float result;


    //Constructor
    person();
    //Constructor with perameters
    person(int i,int a,float r);
    //Destructor
    ~person();

    void display();
};
person::person()
{
    cout<<"No argument constructor called"<<endl;
}

person::person(int i,int a,float r)
{
    id = i;
    age = a;
    result = r;
    cout<<"Id for student is: "<<id<<endl;
    cout<<"Age is: "<<age<<endl;
    cout<<"GPA is: "<<result<<endl;
}
person::~person()
{
    cout<<"Destructing... "<<name<<endl;
}
//In-line function
inline void person::display()
{
    cout<<"Name : "<<name<<endl;
}

int main(){

    //Default constructor object
    person ob;

    person ob1(18,21,3.91);
    ob1.name = "Mr. Jhon";
    ob1.display();

    person ob2(15,22,3.83);
    ob2.name = "Mr. Bill";
    //pointer object
    person *p;
    p = &ob2;
    p->display();

    return 0;
}

