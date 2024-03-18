#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;


void displayTime(int hours, int minutes, int seconds) {
//    // for linux
//    system("clear"); 

   // for windows
    system("cls");

   cout << hours << ":"
        << minutes << ":"
        << seconds << endl;
}

int m = 0,sec = 0,hr = 0 ,t=0;
char ch='s';

int main()
{
    // int min = 0,sec = 0,hr = 0 ,t=0;
    // char ch;
    //watch();
    displayTime(hr, t, sec);

    while(true){


        Sleep(1000);
        sec++;
         //59
        if(sec > 5) {
        m++;
        sec = 0;
        } 
        //25
        if(m>=2){
            Beep(500,1000); 
            cin.get();
            t=t+m;
            m=0;
        }
        //5
        if(m>=1){
            Beep(700,1000); 
            cin.get();
            t+=m;
            m=0;
            sec=0;
        }
        //59
        if(t > 2) {
        hr++;
        t=0;

        }
        displayTime(hr, t, sec);

        // cout<<"Enter any key:"<<endl;
        // _getch();
        // if(ch=='e'){
        // break;
        // }
        

    }

    //watch();

    return 0;
}

int  watch()
{
    system("cls");
    //clrscr();
    //cout<<"nnnnntttt#############"<<endl;
    cout<<":::: Stopwatch ::::"<<endl;
    //cout<<"ntttt#############"<<endl;
    cout<<"Time:::  "<<hr<<":"<<m<<":"<<sec<<endl;

    // cout<<"nnnnnnnnntttttttPress Key"<<endl;
    // cout<<"nttttttt———  "<<endl;
    cout<<"Press Key  for :"<<endl;
    cout<<"::: s -> Start"<<endl;
    cout<<"::: p -> Pause"<<endl;
    cout<<"::: r -> Reset"<<endl;
    cout<<"::: e -> Exit"<<endl;
} 

