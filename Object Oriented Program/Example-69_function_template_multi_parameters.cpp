#include<iostream>
#include<conio.h>

using namespace std;

template <class mytemplate1,class mytemplate2>

mytemplate1 add(mytemplate1 a,mytemplate2 b)
{
    return a+b;
}

int main(){

    
    cout<<add(80.56,20.98) <<endl;

    getch();
}