#include<stdio.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int n, i, k, a, f[4];
    while(~scanf("%d",&n))
    {
        stack<int> s;
        queue<int> q;
        priority_queue<int, vector<int>, less<int> > pq;
        for(i = 0; i < 3; i++) f[i] = 1;
        for(i = 0; i < n; i++)
        {
            scanf("%d%d",&k,&a);
            if(k == 1)
            {
                s.push(a);
                q.push(a);
                pq.push(a);
            }
            else
            {
                if(!s.empty())
                {
                    if(s.top() != a)
                        f[0] = 0;
                    s.pop();
                }
                else
                    f[0] = 0;

                if(!q.empty())
                {
                    if(q.front() != a)
                        f[1] = 0;
                    q.pop();
                }
                else
                    f[1] = 0;

                if(!pq.empty())
                {
                    if(pq.top() != a)
                        f[2] = 0;
                    pq.pop();
                }
                else
                    f[2] = 0;
            }
        }
        int cnt = 0;
        for(i = 0; i < 3; i++)
            if(f[i] == 1)
                cnt++;
        if(cnt == 0)
            printf("impossible\n");
        else if(cnt > 1)
            printf("not sure\n");
        else
        {
            if(f[0] == 1)
                printf("stack\n");
            else if(f[1] == 1)
                printf("queue\n");
            else
                printf("priority queue\n");
        }
    }
    return 0;
}

