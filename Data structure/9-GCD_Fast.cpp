#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
long long euclid_gcd(long long a,long long b);
int main()
{
    long long a;
    long long b;
    cin>>a>>b;
    cout<<euclid_gcd(a,b)<<endl;
    return 0;
}
long long euclid_gcd(long long a,long long b)
{
    long long a1;
    if(b==0)
    return a;
    a1 = a%b;
    // a = b;
    // b = a1;
    return euclid_gcd(b,a1);
}