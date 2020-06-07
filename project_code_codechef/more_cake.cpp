#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int sum1=0,sum2 = 0;
	while(t--){
		int n, s,k,r;
		cin>>n>>s>>k>>r;
		long long int cal;
		if(r==1){
			cal = s*k;
		}
		else{
			cal = (k*(pow(r,s)-1))/(r-1);
		}
		
		if(cal<=n){
			cout<<"POSSIBLE"<<" "<<abs(cal-n)<<endl;
			sum1+=abs(cal-n);
		}
		else{
			cout<<"IMPOSSIBLE"<<" "<<abs(cal-n)<<endl;
			sum2+=abs(cal-n);
		}
	}
	if(sum1>=sum2)
		cout<<"POSSIBLE"<<endl;
	else
		cout<<"IMPOSSIBLE"<<endl;
	return 0;
}