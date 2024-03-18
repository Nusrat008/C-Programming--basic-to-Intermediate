#include<iostream>
using namespace std;

//#include<bits/stdc++.h>

int main(){
    int a,b;
    int i =0;
while(a!=0 & b!=0){
    int c,d;
    cin>>a;
    cin>>b;
    if(a>b){
        int c =a;
        int d =b;
    }    
    else
    {
        int c = b;
        int d =a;
    }
    int sub;
    sub = c-(2*d);
    if(sub>0){
        int result;
        while(result!=0){
            result = sub-d;
            d = result;
            i++;
        }
    }
    if(i%2==0){
        cout<<"Ollie wins"<<endl;
    }
    else
    {
        cout<<"Stan wins"<<endl;
    }
    
    
}

    return 0;

}