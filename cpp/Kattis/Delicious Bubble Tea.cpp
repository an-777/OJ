// Problem: Delicious Bubble Tea
// Contest: UVa
// URL: https://open.kattis.com/problems/bubbletea
// Memory Limit: 256 mb 
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int n,m,ns[9999],ms[9999],k,ki,p;
	int min=2e9;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ns[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>ms[i];
	}
	
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>ki;
			if(min>ns[i]+ms[ki-1]) min=ns[i]+ms[ki-1];
		}
	}
	// cout<<min;
	cin>>p;
	if(0>p/min-1) cout<<0;
	else cout<<p/min-1;
}
