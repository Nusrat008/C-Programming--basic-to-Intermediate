#include<bits/stdc++.h> 
#include<conio.h>
#include<process.h>
#include<iostream>
//#include<dos.h>
#include<string>
#include <unistd.h>
#include <windows.h>
using namespace std;

int h=0,m=0,s=0,ms=0;
char ch='p';

int main()
{
    void watch();
    watch();

    //while 1
    while(1)
    {
    if(kbhit())
    ch=getch();
    if(ch=='s'||ch=='S')
    break;
    if(ch=='e'||ch=='E')
    exit(0);
    }
    //while 2
    while(1)
    {
    watch();

    Sleep(1000);
    //delay(10);

    if(kbhit())
    ch=getch();

    if(ch=='r'||ch=='R')
    {
    h=m=s=ms=0;
    watch();

    while(1)
    {
    if(kbhit())
    ch=getch();
    if(ch=='s'||ch=='S')
    break;
    if(ch=='e'||ch=='E')
    exit(0);
    }
    }
    else
    if(ch=='p'||ch=='P')
    while(1)
    {
    if(kbhit())
    ch=getch();
    if(ch=='s'||ch=='S')
    break;
    if(ch=='e'||ch=='E')
    exit(0);
    if(ch=='r'||ch=='R')
    {
    ch='c';
    h=m=s=ms=0;
    watch();
    }
    }
    else
    if(ch=='e'||ch=='E')
    exit(0);

    if(ms!=99)
    ms++;
    else
    {
    ms=0;
    if(s!=59){
    s++;
    }
    else
    {
    s=0;
    if(m!=59)
    m++;
    else
    {
    m=0;
    h++;
    }
    }
    }
    }
}

void watch()
{
system("cls");
//clrscr();
cout<<"nnnnntttt#############"<<endl;
cout<<"ntttt# Stopwatch #"<<endl;
cout<<"ntttt#############"<<endl;
cout<<"/nnntttt  "<<h<<":"<<m<<":"<<s<<":"<<ms<<endl;

cout<<"nnnnnnnnntttttttPress Key"<<endl;
cout<<"nttttttt———  "<<endl;
cout<<"nttttttt s -> Start"<<endl;
cout<<"nttttttt p -> Pause"<<endl;
cout<<"nttttttt r -> Reset"<<endl;
cout<<"nttttttt e -> Exit"<<endl;
} 