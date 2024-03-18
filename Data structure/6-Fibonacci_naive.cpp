//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
unsigned long Fibrecurs(int n){
    if(n<=1)
        return n;
    else
    return Fibrecurs(n-1)+Fibrecurs(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<Fibrecurs(n)<<endl;
    return 0;
}  