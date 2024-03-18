#include <iostream>
#include<cstring>

using namespace std;
#include "Operator_Global_Function.h"

Mystring::Mystring()
            :str{nullptr}{
            str = new char[1];
            *str = '\0';
    }
