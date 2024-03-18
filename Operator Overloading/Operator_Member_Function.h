#ifndef _OPERATOR_MEMBER_FUNCTION_H_
#define _OPERATOR_MEMBER_FUNCTION_H_

class Mystring
{
private:
    char *str;     //pointer to char[] that hold a c-style string
public:
    Mystring();
    Mystring(const char *s);            //Overloaded Constructor
    Mystring(const Mystring &source);    //Copy Constructor   
    Mystring(Mystring &&source);            //Move Constructor
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);       //Copy Assignment
    Mystring &operator=(Mystring &&rhs);            //Move Assignment

    void display() const;

    int get_length() const;
    const char *get_str() const;

    Mystring operator-() const;                 //Make lowercase
    Mystring operator+(const Mystring &rhs) const;        //Concatenate
    bool operator==(const Mystring &rhs) const;

};

#endif