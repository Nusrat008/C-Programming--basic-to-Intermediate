#include<iostream>

using namespace std;

int main(){
    int R;
    cin>>R;
    double Area;
    const double  p =3.1416;
    Area = p*R*R;
    float  a;
    a = Area/10;

    cout<<setprecision<<a<<endl;



    return 0;
}