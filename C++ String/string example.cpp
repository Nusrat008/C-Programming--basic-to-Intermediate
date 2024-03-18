#include<iostream>
#include<string>

using namespace std;



int main()
{
    char word[80] = "polymorphism";
    char rev[80];

    size_t n = word.length();

    size_t i = 0;
    for ( ; i < n; i++ ) rev[i] = word[n - i - 1];
    rev[i] = '\0';

    std::cout << word << endl;
    std::cout << rev << std::endl;

    return 0;
}

    
