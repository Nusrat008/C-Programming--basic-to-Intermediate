#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j{0};j<t;j++){
        int x,k;
        unsigned long long sum=1;
        cout<<"Enter x & k :"<<endl;
        cin>>x;
        cin>>k;
        for(int i{1};i<=k;i++){
            sum  += pow(x,i);
        }
        cout<<"Result = "<<sum<<endl;
    }
    
    



    return 0;
} 
