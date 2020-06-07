#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b;
		cin>>a>>b;
		int count =0;
		if(a==b){
			cout<<0<<endl;
		}
		else if(max(a,b)%2==0){
			long long int a1 = max(a,b);
			long long int mini;
			if(a1==a){
				mini = b;
			}
			else{
				mini = a;
			}
				while(a1%8==0){
					a1 = a1/8;
					count++;
					if(a1==mini){
						cout<<count;
						goto lab1;
					}
				}
				while(a1%4==0){
					a1 = a1/4;
					count++;
					if(a1==mini){
						cout<<count;
						goto lab1;
					}
				}
				while(a1%2==0){
					a1 = a1/2;
					count++;
					if(a1==mini){
						cout<<count;
						goto lab1;
					}
				}
				if(a1!=mini){
					cout<<-1;
				}
				lab1:cout<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
	return 0;
}