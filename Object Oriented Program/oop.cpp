#include<iostream>
#include "student.h"
using namespace std;
int main(){
    student ob;
    student *p = &ob;
    p ->display();
    const student ob1;
    ob1.display2();
    return 0;

}