#include <bits/stdc++.h>
#include<queue>
using namespace std;

void showqui(queue<int>q){
    queue<int>g = q;
    while(!g.empty()){
        cout<<'\t'<<g.front();
        g.pop();
    }
    cout<<'\n';
}
 
 int mian(){


     queue<int> qui;
     qui.push(30);
     qui.push(40);
     qui.push(58);
     qui.push(39);
     qui.push(87);
     cout<<"\n size: "<<qui.size();
     cout<<"\n qui.front() "<<qui.front();
     cout<<"\n qui.back() "<<qui.back();
     cout<<"\n qui.pop() ";
     qui.pop();
     showqui(qui);
     return 0;
 }