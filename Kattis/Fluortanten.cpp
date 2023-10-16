// Problem: Fluortanten
// Contest: kattis
// URL: https://open.kattis.com/problems/fluortanten
// Memory Limit: 1024 mb 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;
int main(){
	int n;
	int a[1048576];

	while(cin>>n){
	long long int ans=0,sum,best,p;
		for(int i=0;i<n;i++){
			cin>>a[i];
			ans+=a[i]*(i+1);
			if(a[i]==0) p=i;
		}
		sum=ans;
		best=ans;

		for(int i=p+1;i<n;i++){
			ans-=a[i];
			best = max(best,ans);
		}
		ans=sum;
		for(int i=p-1;i>=0;i--){
			ans+=a[i];
			best = max(best,ans);
		}
		cout<<best<<"\n";
	}
}
