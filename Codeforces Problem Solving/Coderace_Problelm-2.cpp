#include<iostream>
using namespace std;
        bool isPowerOfTwo(int n) 
    { 
        if (n == 0) 
            return 0; 
        while (n != 1) 
        { 
            if (n%2 != 0) 
                return 0; 
            n = n/2; 
        } 
        return 1; 
    } 

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,m;
        cin>>s>>m;
        int sub;
        if(s>m){
            sub = s-m;
        }
        else{
            sub = m-s;
        }
        int i,j;
       isPowerOfTwo(sub)? i=0: i=1; 
    
        
        int r;
        if(s==m ){
        r =0;
        cout<<r<<endl;
        }
        else if(i=0){
            r=1;
            cout<<r<<endl;
        }
    }


}