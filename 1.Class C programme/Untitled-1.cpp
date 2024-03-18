#include<iostream>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<vector>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
#define maxn 100005
#define eps 1e-6
#define PI 3.14159265359
int n;
int main()
{
    while(~scanf("%d",&n))
    {
        if(!n)
            break;
        queue<int>q,newq;
        for(int i = 1; i <= n; i ++)
            q.push(i);
        if(q.size()==1)
        {
            printf("Discarded cards:\nRemaining card: 1\n");
            Continue; / / special judgment!
        }
        while(true)
        {
            int temp = q.front();
            q.pop();
            newq.push(temp);
            if(q.size()==1)
                break;
            temp = q.front();
            q.pop();
            q.push(temp);
            if(q.size()==1)
                break;
        }
        printf("Discarded cards: ");
        while(!newq.empty())
        {
            if(newq.size()==1)
            {
                printf("%d\n",newq.front());
                break;
            }
            else
            {
                printf("%d, ",newq.front());
                newq.pop();
            }
        }
        printf("Remaining card: %d\n",q.front());
    }
}