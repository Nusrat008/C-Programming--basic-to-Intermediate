#include<iostream>
#include<conio.h>

using namespace std;

template <class mytemplate>
mytemplate add(mytemplate a,mytemplate b)
{
    return a + b;
}

int main(){

    cout<<add(4,9);
    cout<<add(5.4,7.2);
    getch();
}