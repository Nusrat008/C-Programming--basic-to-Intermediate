#include<iostream>
#include<cstring>

using namespace std;
#include "Operator_Member_Function.h"

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

//Move assignment operator
Mystring &Mystring::operator=(Mystring &&rhs){
    cout<<"Using move assignment "<<endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

bool Mystring::operator==(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)==0);
}

//Make lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff,str);
    for(size_t i =0 ;i<strlen(buff);i++)
        buff[i] = tolower(buff[i]);
    Mystring temp{buff};
    delete [] buff;

    return temp;
}

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[strlen(str) + strlen(rhs.str)];
    strcpy(buff,str);
    strcat(buff,rhs.str);    
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//Display method
void Mystring::display() const{
    cout<<str<<" : "<<get_length()<<endl;
}

//getter
int Mystring::get_length() const{return strlen(str);}

//string getter
const char *Mystring::get_str() const{return str;}







