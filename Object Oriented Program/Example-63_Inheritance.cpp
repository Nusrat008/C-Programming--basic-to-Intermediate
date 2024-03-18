#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class person
{
    public :
    string name;
    int age;
    double height;

    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<" Age : "<<age<<endl;

    }

    person(){
        cout<<"No args constructor called"<<endl;
    }
    person(double h){
        height = h;
    }
    int show(){

        return height;
    }
   // void show(double x){
   // x = height;
   // cout<<"The height of : "<<x<<endl;
   // }
    ~person(){
        cout<<"Destructor call for "<<name<<endl;
    }
};









class student:public person
{
   public:
      const int fee;
      const int exam;
      int id;
       student (int x,int y,int z)
       :fee(x),exam(y)
       {
          id = z;
           cout<<"Fee : "<<fee<<endl;
           cout<<" Exam fee is: "<<exam<<endl;
           cout<<" Id for student is: "<<id<<endl;
       }

};

/*
class student : public person
{
    public :
    int id;
    void display2()
    {
        cout<<" Id : "<<id<<endl;
        display1();

    }
};
*/
int main(){

    person s1;
    person ob1(600);
    person *p;
    p = &ob1;
    cout<<"The height is : "<<p->show()<<endl;

    s1.name = "Abdur rahim";
    s1.age = 80;
    s1.display1();
    student s2(360,90000,1800);



    return 0;
}
