#include<map>
#include<set>
#include <vector>
#include<stack>
#include<queue>
#include<cmath>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll unsigned long long
#define inf 0x3f3f3f
#define esp 1e-8
#define bug {printf("mmp\n");}
#define mm(a,b) memset(a,b,sizeof(a))
#define T() int test,q=1;scanf("%d",&test); while(test--)
const int maxn=2e5+10;
const double pi=acos(-1.0);
const int N=201;
const int mod=1e9+7;
map<string,int>ss;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
       ss[s]+=1;
       int ans=ss[s];
       if(ans==1)
       {
           cout<<"OK"<<endl;
           continue;
       }
       else
       {
           cout<<s<<ans-1<<endl;
       }
    }
    return 0;
}