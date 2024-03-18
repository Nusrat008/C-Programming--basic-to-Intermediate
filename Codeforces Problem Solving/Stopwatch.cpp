#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
int main()
{
 
 system("CLS");
 int HH=0,MM=0,SS=0;
 cout<<"\n\t\t stopwatch";
 cout<<"\n\t\t HH: MM: SS";
 cout<<"\n\t\t "<<HH<<" : "<<MM<<" : "<<SS;
 cout<<"\n\t\t press any key to start";

 _getch();
 while(!_kbhit())
 {
  SS++;
  Sleep(10);
  if(SS>59)
  {
   MM++;
   SS=0;
   Beep(400,1500); // 523 hertz (C5) for 500 milliseconds     
   cin.get();
  }
  if(MM>59)
  { 
    HH++;
    MM=0;
  }
  system("CLS");
  cout<<"\n\t\t stopwatch";
  cout<<"\n\t\t HH: MM: SS";
  cout<<"\n\t\t "<<HH<<" : "<<MM<<" : "<<SS;
  cout<<"\n\t\t press any key to stop";
 }
 _getch();
 cout<<"\n\t\t the time after pausing is";
 cout<<"\n\t\t "<<HH<<" : "<<MM<<" : "<<SS;
 _getch();
 return 0;
};