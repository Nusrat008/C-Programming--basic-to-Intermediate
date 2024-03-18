#include<bits/stdc++.h>
//#include <iostream>
using namespace std;

int main(){
    string s = "0424325400321320";
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0'){
            count++;
            if(s[i] %2 ==1){
                s[i] = '<';
            }
            else{
                s[i] = '>';
            }
        }
    }
    cout<<s;


    return 0;
}

// bool flag;
// if(s[i] == '0'){
//     flag = !flag;
//     if(flag){
//         s[i] = '<';
//     }
//     else{
//         s[i] = '>';
//     }
// }
// cout<<s;
