/*
#include <iostream>  
#include <algorithm>  
#include <string>  
#include <cstdio>  
using namespace std;  
  
const int MAXN = 51;  
bool cmp(const string a, const string b) {  
return a + b > b + a;  
}  
int main() {  
int n;  
string str[MAXN];  
while (scanf("%d", &n) != EOF && n) {  
for (int i = 0; i < n; i ++) {  
cin>>str[i];  
}  
sort (str, str + n, cmp);  
for (int i = 0; i < n; i ++) {  
cout<<str[i];  
}  
cout<<endl;  
}  
return 0;  
}//

*/
#include<cstdio>
#include<queue>
#define MAXN 5005
using namespace std;
 
priority_queue<long long, vector<long long>, greater<long long> >que;
 
int main(){
    int N;
    long long m;
 
    while(scanf("%d",&N) && N){
        while(!que.empty()) que.pop();
        for(int i=0; i<N; ++i){
            scanf("%lld",&m);
            que.push(m);
        }
        long long sum=0, ans=0, a, b, t;
        while(!que.empty()){
            a=que.top();
            que.pop();
            if(que.empty()) break;
            b=que.top();
            que.pop();
            sum=a+b;
            ans += sum;
            que.push(sum);
        }
        printf("%lld\n", ans);  
    } 
    return 0;
}