#include<iostream>

#include<cstring>

#include "apple.h"

using namespace std;

/*
int main(){
    apple empty;
    apple larry("Larry hero");
    apple stooge{larry};

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
*/

//No-args constructor
apple::apple()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded constructor
apple::apple(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[strlen(s) + 1];
            strcpy(str,s);
        }
}

//Copy constructor
apple::apple(const apple &source)
    :str{nullptr}{
        str = new char[strlen(source.str) + 1];
        strcpy(str,source.str);
}

//Destructor
apple::~apple(){
    delete[]str;
} 

//Display method
void apple::display() const{
    cout << str << ":" << get_length() << endl;
}

//length getter
int apple::get_length() const{return strlen(str);}

//string getter
const char *apple::get_str() const{return str;}



