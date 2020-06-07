#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int x = k/n;
		if(k<=n){
			cout<<k<<endl;
		}
		else{
		if(x%2==0){
			k = k-(n*x-2);
		}
		else{
			if(k>2*n){
				k = n-k%n+2;
			}
			else{
			k = n-k%n;
			}
		}
		cout<<k<<endl;
		}
	}
	return 0;
}