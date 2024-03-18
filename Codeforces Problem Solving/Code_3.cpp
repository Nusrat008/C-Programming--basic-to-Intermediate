#include<bits/stdc++.h> 
#include<iostream>
using namespace std;

int big( int n){
    int sum;
    if(n%2==0){
        sum+=n;
    }
    else{
        sum+=(n*2);
    }
    return sum;
    big(n-1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        
        cout<<big(a)<<endl;

    }


    return 0;
}