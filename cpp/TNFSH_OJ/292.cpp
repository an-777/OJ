// Problem: 292 / 2. Jessica好仁慈
// Contest: TNFSH Online Judge
// URL: https://toj.tfcis.org/oj/chal/171343/
// Memory Limit: 65536 kB
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int ten=0;
	int ans[999]={0};
	int a,b,c;
	int j=1,i;
	cin>>a>>b>>c;
	for(int i=1;c>0;i*=a){
		ten+=(c%10)*i;
		c/=10;
	}
	for(i=1,j=0;ten>0;i*=10,j++){
		ans[j]=(ten%b);
		ten/=b;
	}
	j--;
	 if(j==-1){
	 	cout<<0;
	 }
	else for(;j>=0;j--){
	 	cout<<ans[j];
	 }
	cout<<"\n";
}
