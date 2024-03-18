//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
unsigned long long Fibrecurs(int n){
    unsigned long long arr[1000000];
    int i;
    arr[0] = 0;
    arr[1] = 1;
    for(i=2;i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}

int main(){
    int n;
    cin>>n;
    cout<<Fibrecurs(n)<<endl;
    return 0;
}  