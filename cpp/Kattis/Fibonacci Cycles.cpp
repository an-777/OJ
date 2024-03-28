// Problem: Fibonacci Cycles
// Contest: Kattis
// URL: https://open.kattis.com/problems/fibonaccicycles
// Memory Limit: 1024 mb
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int n,a,b,c,t;;
	cin>>n;

	
	for(int i=0;i<n;i++){
		int k,g[999]={0},l[999]={};
		cin>>k;
		a=1, b=1, t=0;
		for(int j=2;;j++){
			c = (a+b)%k;
			a=b;
			b=c;
			++t;
			if(g[c]!=0){
				cout<<l[c]<<"\n";
				break;
			}else{
				g[c]=1;
				l[c]=j;
			}

		}
	}	
}
// 0 1 1 2 3 5 8 13 21 34 55 89
//
// 4
// 0 1/1 2 3 1 0   
// 13
// 0 1/1 2 3 5 8 0 5
// 22
// 0 1/1 2 3 5 8 13 21 12 11 1
