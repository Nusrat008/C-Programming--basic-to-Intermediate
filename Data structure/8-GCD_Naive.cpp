#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
long long naive_gcd(long long a,long long b);
int main()
{
    long long a;
    long long b;
    cin>>a>>b;
    cout<<naive_gcd(a,b)<<endl;
    return 0;
}
long long naive_gcd(long long a,long long b)
{
    long long best=0;
    for(int d =1;d<min(a,b);d++)
    {
        if(a%d==0 && b%d==0)
        best = d;
    }
    return best;
}