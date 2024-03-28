// Problem: 405 / B. 自戀數
// Contest: TNFSH Online Judge
// URL: https://toj.tfcis.org/oj/chal/172514/
// Memory Limit: 524288 Kb
// Time Limit: 500 ms

#include <iostream>
using namespace std;

int pow(int a,int b){
	int result=1;
	for(int i=0;i<b;i++){
		result*=a;
	}
	return result;
}

int main(){
	int b,n,t=0,temp,d=0,k;
	cin>>b>>n;
	temp=n;
	while(temp>0){
		d++;
		temp/=10;
	}
	temp=n;	
	for(int i=1;temp>0;i*=b){
		t+=(temp%10)*i;
		temp/=10;
	}
	temp=n;
	k=0;
	for(int i=1;i<=d;i++){
		k+=pow((temp%10),d);
		temp/=10;
	}
	if(k==t) cout<<"YES\n";
	else cout<<"NO\n";
}
