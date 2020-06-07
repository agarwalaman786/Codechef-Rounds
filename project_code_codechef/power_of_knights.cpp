#include<bits/stdc++.h>
using namespace std;
vector<int>gr[101];


int vis[101] = {0};

void dfs(int n,vector<int>&sol){
	vis[n] =1;
	sol.push_back(n);
	sort(gr[n].begin(),gr[n].end());
	for(auto i:gr[n]){
		if(vis[i]==0){
			dfs(i,sol);
		}
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			gr[i].clear();
		}
		memset(vis,0,sizeof(vis));
		map<int,int>mp;
		for(int i=0;i<m;i++){
			string a,b;
			cin>>a>>b;
			int x1 = a[1]-'0';
			int x2 = b[1]-'0';
			if(abs(x1-x2)==1)
			    mp[a[1]-'0'] = b[1]-'0';
		}
		map<int,int>:: iterator it;
		vector<int>sol;
		for(auto it = mp.begin();it!=mp.end();it++){
			sol.push_back(it->first);
			sol.push_back(it->second);
		}

		vector<int>sol1;
		for(int i=0;i<=sol.size();i++){
			if(i<sol.size() && (sol[i]!=sol[i+1])){
				sol1.push_back(sol[i]);
			}
		}
		int flag = 0;
		for(int i=0;i<sol1.size();i++){
			//cout<<sol1[i]<<" ";
			if(sol1[i]!=(i+1)){
				flag = 1;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag==0){
			cout<<"YES"<<endl;
			for(int i=n;i>=1;i--){
				cout<<"k"<<i<<endl;
			}
		}
	}
	return 0;
}