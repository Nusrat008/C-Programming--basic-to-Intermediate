#include<bits/stdc++.h>

using namespace std;

int n,edge;
vector<int>vec[100010];
int dis[100010];
bool vis[100010];
queue<int>q;

void DFS(int node){
	if(vis[node])
	return;
	vis[node] = true;
	int l = vec[node].size()
	for(int i=0;i<l;i++){
		if(!vis[vec[node][i]])
		{
			dis[vec[node][i]] = dis[node] +1;
			DFS(vec[node][i]);#include<bits/stdc++.h>

using namespace std;

int n,edge;
vector<int>vec[100010];
int dis[100010];
bool vis[100010];
queue<int>q;

void BFS(int node){
	dis[node] =0;
	memset(vis,false,sizeof(vis));
	q.push(node);
	vis[node] = true;
	while(!q.empty()){
		int w = q.front();
		q.pop();
		int l = vec[w].size();
		for(int i=0;i<l;i++){
			if(!vis[vec[w][i]])
			vis[vec[w][i]] = true;
			dis[vec[w][i]] = dis[w] + 1;
		}

	}
}
int main(){
	freopen("in.txt","r",stdin);
	int u,v;
	scanf("%d %d",n,edge);
	for(int i=0;i<edge;i++){
		scanf("%d %d",&u,&v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	BFS(1);
}
		}
	}
}
int main(){
	freopen("in.txt","r",stdin);
	int u,v;
	scanf("%d %d",n,edge);
	for(int i=0;i<edge;i++){
		scanf("%d %d",&u,&v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	dis[1] = 0;
	memset(vis,false,sizeof(vis));
	DFS(1);
	for(int i=1;i<=n;i++){
		
	}
}
