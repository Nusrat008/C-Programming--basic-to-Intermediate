#include <bits/stdc++.h>
#include<cstring>

//#include "Mystring.h"

using namespace std;

class mystring_copy
{
private:

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_length() const;
    const char *get_str() const;

};