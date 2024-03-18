#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main(){
    string str1="Bangla";
    string str2="desh";
    string str3;

    str3=str1;
    cout<<"String 3: "<<str3<<endl;

    str3 = str1 + str2;
    cout<<" String 3: "<<str3<<endl;

    int len = str3.size();
    cout<<"Length of str3 is: "<<len<<endl;

    getch();
}