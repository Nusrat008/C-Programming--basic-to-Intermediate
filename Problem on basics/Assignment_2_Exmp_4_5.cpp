# include <iostream>
using namespace std;

class samp
{
    int i, j;
public :
    void set_ij (int a, int b) { i=a; j=b; }
    ~ samp () { cout << " Destroying ...\n"; }
    int get_product () { return i*j; }
};

int main ()
{
    samp *p;
    int i;

    p = new samp [10];
    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }

    for (i=0; i <10; i++)
        p[i]. set_ij (i, i);

    for (i=0; i <10; i++)
    {
        cout << " Product [" << i << "] is: ";
        cout << p[i]. get_product () << "\n";
    }
    delete [] p;

    return 0;
}




//Example-3
/*
#include <iostream>
using namespace std;

int main ()
{
    int *p;

    p = new int [5];

    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }

    int i;

    for (i=0; i <5; i++)
        p[i] = i;

    for (i=0; i <5; i++)
    {
        cout << " Here is integer at p[" << i << "]: ";
        cout << p[i] << "\n";
    }

    delete [] p;

    return 0;
}
*/

//Example-2
/*
#include <iostream>
using namespace std;

class samp
{
    int i, j;
public :
    samp (int a, int b) { i=a; j=b; }
    int get_product () { return i*j; }
};

int main ()
{
    samp *p;

    p = new samp (6 , 5);

    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }

    cout << " Product is: " << p-> get_product () << "\n";

    delete p;

    return 0;
}
*/

//Example-1
/*
#include <iostream>
using namespace std;

int main ()
{
    int *p;

    p = new int (9);

    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }

    cout << " Here is integer at p: " << *p << "\n";

    delete p;

    return 0;
}
*/
