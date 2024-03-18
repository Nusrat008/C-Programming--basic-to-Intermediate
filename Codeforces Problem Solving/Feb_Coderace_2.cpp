#include<bits/stdc++.h> 
#include<iostream>

using namespace std;

// int cons(int l,int u) {
//     int count =0;
//     while(l<=u){
//         bool m;
//         if( pow(2,l) == ( pow(2,l-1)+pow(2,l-1) ) ){
//             count++;
//         }
//         l++;
//     }
//     return count;
// //    if((x & (x-1)) && x){
// //       cout
// //    } else {
// //       return false;
// //    }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int low,up,count=0;
        
//         cin>>low>>up;
//         cout<<cons(low,up)<<endl;
    
//     }
//     return 0;
// }

bool bea(unsigned int n) 
{ 
    
    return ((n&(n-1)) && n); 
} 
int main(){

    int t;
        cin>>t;
        while(t--){
            int low,up,count=0;
            cin>>low>>up;
            while(low<=up){
                if(bea(low))
                count++;
                low++;
            }
            cout<<count<<endl;
        
        }
    return 0;
}


