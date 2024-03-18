#include<iostream>
#include<conio.h>

using namespace std;
class student
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

int main(){
    student s1(360,90000,1800);
    


    getch();
}