
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

//Base class
class person
{
    public :
    string name;
    int age;
    int result;


    //Constructor
    person();
    //Constructor with perameters
    person(int a,int r);
    //Destructor
    ~person();

    void display1();
    int get_result();
};
person::person()
{
    cout<<"No argument constructor called"<<endl;
}
person::person(int a,int r)
{
    age = a;
    result = r;
}
person::~person()
{
    cout<<"Destructing... "<<name<<endl;
}
//In-line function
inline void person::display1()
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age: "<<age<<endl;

}
int person::get_result()
{
    return result;
}



//Inherited Class or Derived class
class student : public person
{
    int id;
public:
    int exam_fee;
    int sub;

    //Constructor with two parameter
    student (int x,int y,int z);
    int get_gpa();


};

student::student(int x,int y,int z):id(x)
{
    exam_fee = y;
    sub = z;
    cout<<"Id for student is: "<<id<<endl;
    cout<<"Exam fee is: "<<exam_fee<<endl;
    //derived class can call base class public member functions
    //cout<<"GPA is: "<<(sub+get_result())<<endl;
}
int student::get_gpa()
{
    return sub+result;

}


int main(){

    person s1(50,9);
    s1.name = "Mr Bill";
    s1.display1();
    cout<<"resutl: "<<s1.get_result()<<endl;


    student s2(6,800,2);
    student *p;
    p = &s2;

    cout<<"The GPA is : "<<p->get_gpa()<<endl;


    return 0;
}

