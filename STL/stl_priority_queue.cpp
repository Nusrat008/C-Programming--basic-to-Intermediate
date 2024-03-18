#include<bits/stdc++.h>

#include<queue>

using namespace std;

int main(){
    priority_queue <string> q;
    q.push("dipta");
    q.push("nabil");
    q.push("arnob");
    q.push("reza");

    while(!q.empty()){
        string x;
        x = q.top();
        cout<<x<<endl; 
        q.pop();
    }


    // priority_queue <int> q;
    // q.push(600);
    // q.push(100);
    // q.push(300);
    // q.push(10);
    // q.push(7);

    // while(!q.empty()){
    //     int x;
    //     x = q.top();
    //     cout<<x<<endl;
    //     q.pop();
    // }

    return 0;
}    