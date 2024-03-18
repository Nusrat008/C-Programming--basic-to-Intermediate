#ifndef _MYSTRING_COPY_ASSIGN_H_
#define _MYSTRING_COPY_ASSIGN_H_


class Mystring
{
private:
    char *str;     //Pointer to a char[] that holds a C-style string
public:
    Mystring();
    Mystring(const char *s);                 //Overloaded constructor
    Mystring(const Mystring &source);        //Copy constructor
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);  //Copy assignment

    void display() const;

    //getters
    int get_length() const;
    const char *get_str() const;
};



#endif