#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){

    int t;
    int a,b,rem,r2,out;
    cin>>t;

    while(t--){
       cin>>a>>b;
        rem = a/2;
        r2 = b/2;
        if( b%2!=0){
            out = rem + r2;
            cout<<out<<endl;
        }
        else if(b%2==0){
            vector <int>even;

            vector<int>::iterator it;
            int i=1;
            for(;i<=a;i++){
                if(i%2==0){
                    even.push_back(i);
                }
            }
            int pos=binary_search(even.begin(),even.end(),b);
            cout<<pos<<endl;
            
        }


    }

    return 0;
}