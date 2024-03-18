#include<iostream>

#include"Mystring_copy_assign.h"
#include<cstring>

using namespace std;

//No-args constructor
Mystring::Mystring()
        :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
        :str{nullptr}{
            if(s == nullptr){
                str = new char[1];
                *str = '\0';
            }
            else{
                str = new char [strlen(s) + 1];
                strcpy(str,s);
            }
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
        :str{nullptr}{
            str = new char[strlen(source.str) + 1];
            strcpy(str,source.str);
}

//Destructor
Mystring::~Mystring(){
    delete [] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    cout<<"Copy assignment"<<endl;
    if(this == &rhs)
        return *this;
    delete [] this ->str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str,rhs.str);
    return *this;
}


//Display method
void Mystring::display() const{
    //  cout<<str<<endl;
    cout<<str<<" : "<<get_length()<<endl;
}
//getter
int Mystring::get_length() const {return strlen(str);}
const char *Mystring::get_str() const {return str;}