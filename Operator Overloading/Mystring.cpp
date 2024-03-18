#include<iostream>

#include<cstring>

#include "Mystring.h"

using namespace std;

Mystring::Mystring()
        :str{nullptr}{
        str = new char[1];
        *str  = '\0';
}
//overloaded constructor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s ==nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[strlen(s) + 1];
            strcpy(str,s);
        }    
}
//copy constructor
Mystring::Mystring(const Mystring &source)
        :str{nullptr}{
        str = new char[strlen(source.str) + 1];
        strcpy(str,source.str);            
}
Mystring::~Mystring(){
    delete [] str;

}
//Display method
void Mystring::display() const{
    cout<<str<<":"<<get_length()<<endl;
}
//length getter
int Mystring::get_length() const {return strlen(str);}

//string getter
const char  *Mystring::get_str() const{return str;}

