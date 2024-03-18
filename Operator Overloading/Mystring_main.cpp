#include<iostream>
//#include <bits/stdc++.h>
#include<cstring>

#include "Mystring.cpp"

using namespace std;



int main(){
    Mystring empty;
    Mystring bangla{"Bangladesh"};
    Mystring eng{bangla};

    empty.display();
    bangla.display();
    eng.display();

    return 0;
}