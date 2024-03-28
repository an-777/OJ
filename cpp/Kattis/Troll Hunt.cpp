// Problem: Troll Hunt
// Contest: Kattis
// URL: https://open.kattis.com/problems/trollhunt
// Memory Limit: 1024 mb
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int a,b,c,ans;
	cin>>a>>b>>c;
	a--;
	ans = a/(b/c);
	
	if(a%(b/c)!=0){
		ans++;
	}
	if(ans==0){
		ans = 1;
	}
	cout<<ans;
}
