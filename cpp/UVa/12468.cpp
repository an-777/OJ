// Problem: Q12468 - Zapping
// Contest: UVa
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912
// Memory Limit: 
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==-1 && b==-1) break;
		if(a>b) swap(a,b);
		if(b-a<100-b+a) cout<<b-a<<"\n";
		else cout<<100-(b-a)<<"\n";
	}
}
