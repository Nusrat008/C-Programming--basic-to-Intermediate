#ifndef _APPLE_H_
#define _APPLE_H_

// #include "Mystring.cpp"

class apple
{
private:
    char *str;
public:
    apple();
    apple(const char *s);
    apple(const apple &source);
    ~apple();
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif