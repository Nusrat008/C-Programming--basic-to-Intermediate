#include<iostream>
#include<string>
#include<vector>
using namespace std;

void swap(double& a,double& b)
{
    double temp = a;
    a = b;
    b = temp;
}


int main(){
    int i=9;
    int& r=i;
    cout<<r<<endl;
    r=20;
    i=400;
    cout<<r<<" "<<i<<endl;
    vector<vector<double>>v;

    double x = 20;
    double y = 50;
    cout<<"X = "<<x<<"; Y = "<<y<<endl;
    swap(x,y);
    cout<<"After swap:: X = "<<x<<"; Y =  "<<y<<endl;

    //double val=v[f(x)][g(x)];

    return 0;
}