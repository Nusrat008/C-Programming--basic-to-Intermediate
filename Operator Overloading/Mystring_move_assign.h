#ifndef _MYSTRING_MOVE_ASSIGN_H_
#define _MYSTRING_MOVE_ASSIGN_H_


class Mystring{
private:
    char *str;          //pointer to a char[] that holds a C-style string

public:
    Mystring();             //No-args constructor
    Mystring(const char *s);        //Overloaded Constructor
    Mystring(const Mystring &source);       //Copy constructor
    Mystring(Mystring &&source);            //Move constructor
    ~Mystring();                            //Destructor

    Mystring &operator=(const Mystring &rhs);       //Copy assignment
    Mystring &operator=(Mystring &&rhs);            //Move assignment

    void display() const;

    int get_length() const;                         //getter
    const char *get_str() const;  

};

#endif
