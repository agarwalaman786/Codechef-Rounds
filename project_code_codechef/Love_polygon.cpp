#include<bits/stdc++.h>
using namespace std;
vector<int>gr[1000000];
int vis[1000000];

void dfs(int n,int &count){
	vis[n] = 1;
	for(auto i:gr[n]){
		if(vis[i]==0){
			count++;
			dfs(i,count);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			gr[i].clear();
		}
		memset(vis,0,sizeof(vis));
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			gr[a].push_back(b);
			gr[b].push_back(a);
		}
		int count = 1;
		int ttl = 0;
		vector<int>sol;
		for(int i=0;i<n;i++){
			if(vis[i]==0){
				dfs(i,count);
				ttl++;
				sol.push_back(count);
				count=1;
			}
		}
		cout<<ttl<<endl;
		sort(sol.begin(),sol.end());
		for(int i=0;i<sol.size();i++){
			cout<<sol[i]<<" ";
		}
		cout<<endl;
	}
}