#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,d,e;
		cin>>a>>b>>d>>e;
		long long int z =0;
		int n;
		int mx = INT_MIN;
		cin>>n;
		for(int i=0;i<=n;i++){
			if( mx<((((a^b )|i)^d)|e))
				z = i;
		}
		cout<<z<<endl;
	}
	return 0;
}