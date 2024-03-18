#include <iostream>

using namespace std;

inline int min( int a, int b)
{
    return a<b ? a : b;
}

inline long min( long a, long b)
{
    return a<b ? a : b;
}

inline double min( double a, double b)
{
    return a<b ? a : b;
}
int main ()
{
    cout << min ( -10 , 10) << "\n";
    cout << min ( -10.0 , 100.002) << "\n";
    cout << min ( -10L, 12L) << "\n";
    return 0;
}







/*
#include <iostream>

using namespace std;

class samp
{
    int i, j;
    public :
    samp (int a, int b);
    int divisible ();
};
samp :: samp (int a, int b)
{
    i = a;
    j = b;
}

inline int samp :: divisible ()
{
    return !(i%j);
}
int main ()
{
    samp ob1 (550 , 2) , ob2 (550, 3);

    if(ob1 . divisible ())
    cout << "550 divisible by 2"<<endl;

    if(ob2 . divisible ())
    cout << "550 divisible by 3"<<endl;

    return 0;
}
*/

/*
# include <iostream >

using namespace std;

inline int even (int x)
{
return !(x %2);
}
int main ()
{
if( even (10) )
cout << "10 is even \n";
if( even (11) )
cout << "11 is even \n";
return 0;
}
*/
