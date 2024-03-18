#include<iostream>
//#include <bits/stdc++.h>
#include<cstring>

//#include "apple.h"
#include "apple.cpp"

using namespace std;



int main(){
    apple empty;
    apple larry("Larry hero");
    apple stooge{larry};

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}

