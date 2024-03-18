#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int>pq;
    pq.push(5);
    pq.push(95);
    pq.push(200);

    cout<<pq.top();

    return 0;
}