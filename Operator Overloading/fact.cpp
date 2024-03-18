#include <iostream>
#include "fact.h"

using namespace std;

int main()
{
    cout<<"welcome to data flair tutorial!"<<endl;
    int pos;
    cout<<"Enter positive integer: "<<endl;
    cin>>pos;
    cout<<"The factorial of "<<pos<<" is : "<<fact(pos)<<endl;
    
    return 0;
}