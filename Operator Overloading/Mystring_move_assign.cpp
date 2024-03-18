#include<iostream>

#include"Mystring_move_assign.h"
#include<cstring>

using namespace std;

Mystring::Mystring()
        :str{nullptr}{
    str = new char[1];
    *str = '\0';
}
//Overloaded Constructor
Mystring::Mystring(const char *s)
        :str{nullptr}{
            if(s==nullptr){
                str = new char[1];
                *str = '\0';
            }
        else{
            str = new char[strlen(s) + 1];
            strcpy(str,s);
        }
}

//Copy Constructor
Mystring::Mystring(const Mystring &source)
        :str{nullptr}{
            str = new char[strlen(source.str) + 1];
            strcpy(str,source.str);
            cout<<"Copy constructor used"<<endl;
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
        :str(source.str){
            source.str = nullptr;
            cout<<"Move constructor used"<<endl;
}
//Destructor
Mystring::~Mystring(){
    if(str==nullptr){
        cout<<"Calling destructor for Mystring :nullptr"<<endl;;
    }
    else{
        cout<<"Calling destructor for Mystring:"<<str<<endl;
    }
    delete [] str;
}
//Copy assingment
Mystring &Mystring::operator=(const Mystring &rhs){
    cout<<"Using copy assgnment"<<endl;
    if(this== &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str,rhs.str);
    return *this;
}
//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    cout<<"Using move assignment"<<endl;
    if(this == &rhs)
        return *this;
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;

}

