#include<iostream>

using namespace std;


int main(){
    int n=1;
    while(n){
     int t,sum=0;
     cin>>t;
     while(t--){

         int a;
         cin>>a;
         sum += a;
     }
     cout<<sum<<endl;
    }
    n=0;
    return 0;
}