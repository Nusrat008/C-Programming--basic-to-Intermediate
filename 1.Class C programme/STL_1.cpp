#include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;
void showstack(stack<int>s){
    while(!s.empty()){
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<'\n';
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(45);
    cout<<"The stack is: "<<endl;
    showstack(s);
    cout<<"\ns.size(): "<<s.size()<<endl;
    cout<<"s.top(): "<<s.top()<<endl;

    cout<<"s.pop():  "<<s.pop()<<endl;
    showstack(s);





    return 0;
}