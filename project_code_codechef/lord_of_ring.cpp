#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int cnt = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				 string s = to_string(i*j + i+j);
				 string s1 = to_string(i) + to_string(j);
				 if(s==s1){
				 	cnt++;
				 	cout<<i<<" "<<j<<" "<<s1<<endl;
				 }
			}
		}
		cout<<cnt<<endl;
	}
}