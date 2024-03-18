#include <bits/stdc++.h>
//#include<cstring>

//#include "Mystring.h"

using namespace std;

class Mystring
{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

//No-args constructor
Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
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
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str = new char[strlen(source.str) + 1];
        strcpy(str,source.str);
}

//Destructor
Mystring::~Mystring(){
    delete[]str;
} 

//Display method
void Mystring::display() const{
    cout << str << ":" << get_length() << endl;
}

//length getter
int Mystring::get_length() const{return strlen(str);}

//string getter
const char *Mystring::get_str() const{return str;}


int main(){
    Mystring empty;
    Mystring larry("Larry of larry is larrd hero for hero");
    Mystring stooge{larry};

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}



//Measuring intelligence and smartness is difficult,
//  so we just check programming capability. 
// In the above question, whoever gets over 60% is placed for interview.
