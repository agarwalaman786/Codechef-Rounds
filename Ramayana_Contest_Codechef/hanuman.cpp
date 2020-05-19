#include<bits/stdc++.h>
using namespace std;
vector<int>gr[100001];
int vis[10001];
int dis[10001];
int dfs(int s,int t, int d){
	vis[s] = 1;
	dis[s] = t;
	if(s==1 && d==0)
		return 1;

	if(s==1 && dis[s]!=d)
		return -1;
	if(dis[s]==d)
		return s;

	for(auto i:gr[s]){
		if(vis[i]!=1){
			return dfs(i,t+1,d);
		}
	}
}


int main(){
		int n,q;
		cin>>n>>q;
		for(int i=0;i<n-1;i++){
			int a,b;
			cin>>a>>b;
			gr[a].push_back(b);
			gr[b].push_back(a);
		}
		while(q--){
			int s,d;
			cin>>s>>d;
			memset(dis,0,sizeof(dis));
			memset(vis,0,sizeof(vis));
			cout<<dfs(s,0,d)<<endl;
		}
	return 0;
}