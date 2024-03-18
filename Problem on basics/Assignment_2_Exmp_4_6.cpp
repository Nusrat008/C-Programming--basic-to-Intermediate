#include <iostream>

using namespace std;

void f(int *n);

int main ()
{
    int i = 0;

    f(&i);

    cout << " Here is i's new value : " << i << "\n";

    return 0;
}

void f(int *n)
{
    *n = 100;
}


//Example-2
/*
#include <iostream>

using namespace std;

void f(int &n);

int main ()
{
    int i = 0;

    f(i);

    cout << " Here is i's new value : " << i << "\n";

    return 0;
}

void f(int &n)
{
    n = 100;
}
*/


//Example-1
/*
#include <iostream>

using namespace std;

void f(int *n);

int main ()
{
    int i = 0;

    f(&i);

    cout << " Here is i's new value : " << i << "\n";

    return 0;
}

void f(int *n)
{
    *n = 100;
}
*/

