#include<bits/stdc++.h>

#include<stack>

using namespace std;

int main(){
    stack <string> s;

    s.push("dipta");
    s.push("nabil");
    s.push("arnob");

    // s.pop();
    // cout<<s.top()<<endl;
    while(!s.empty()){
        string x;
        x = s.top();
        cout<<x<<endl;
        s.pop();
    }
    

    return 0;
}    