// Problem: p389: Basically Speaking
// Contest: UVa
// URL: https://onlinejudge.org/external/3/p389.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;
int main(){
	int a,b,i;
	string n;
	string key="0123456789ABCDEF";
	while(cin>>n>>a>>b){
		int temp=0;
		char ans[99];
		for(i=0;i<n.size();i++){
			if(n[i]>='A' && n[i]<='F'){
				temp = temp*a+n[i]-'A'+10;
			}else{
				temp = temp*a+n[i]-'0';
			}
		}
		if(temp==0){
			cout<<"      0\n";
			continue;
		}
		for(i=0;temp>0;i++){
			ans[i]=key[temp%b];
			temp/=b;
		}
		i--;
		if(i>6) cout<<"  ERROR";
		else{
			for(int j=0;j<6-i;j++){
				cout<<" ";
			}
			for(;i>=0;i--){
				cout<<ans[i];
			}
		}
		cout<<"\n";
	}
}
