#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int>p;

vector<p> vec[100010];

void Dij(int node){
	dis[node] = 0;
	for(int i = 1;i<=n+5;i++){
		dis[i] = 100000000;
		priority_queue<P,vector<p>,greater<p>>pq;
		pq.push(make_pair(0,0));
		while(!pq.empty())
		{
			P p= pq.top();
			int u = p.second;
			pq.pop();
			int l = vec[u].size();
			for(int i=0;i<l;i++)
			{
				P v= vec[u][i];
				if(dis[v.first]>dis[u]+v.second){
					dis[v.first] = dis[u] + v.second;
					pq.push(make_pair(dis[v.first],v.first));
					
				}	
			}
		}
	}
}
int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int u,v,cost;
	
	scanf("%d %d %d",&n,&edge);
	for(int i =0;i<edge;i++){
		scanf("%d %d %d",&u,&v,&cost);
		vec[u].push_back(make_pair(v,cost));
		vec[v].push_back(make_pair(u,cost));
		
	}
	Dij(0);
	for(int i=0;i<n;i++){
		printf("%d = %d\n",i,dis[i]);
	}
}

