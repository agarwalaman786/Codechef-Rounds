#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int cnt = 0;

		int pw = log10(n)+1;
		int temp = pw;
		//cout<<pw<<endl;
		int num = 0;
		while(pw--){
			num=num*10 + 9;
		}

		if((n>=9 && n<num) && num!=0){
			cnt+=m*(temp-1);
		}
		else if(n>=num){
			cnt+=temp*m;
		}
		else{
			cnt =0;
		}
		if(num==0){
			if(n>=9){
				cnt+=m;
				cout<<cnt<<" "<<m<<endl;
			}
			else{
				cout<<0<<" "<<0<<endl;
			}

		}
		else{
		if(cnt==(temp*m) || cnt==(temp-1)*m){
			if(cnt!=0)
			cout<<cnt<<" "<<m<<endl;
		    else{
		    	cout<<0<<" "<<0<<endl;
		    }
		}
		else{
			cout<<0<<" "<<0<<endl;
		}
		}
	}
	return 0;
}