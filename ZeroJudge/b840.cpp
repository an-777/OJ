// Problem: b840. 104北二4.農作物採收問題
// Contest: ZeroJudge
// URL: https://zerojudge.tw/ShowProblem?problemid=b840
// Memory Limit: 64 mb 
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int n,arr[20][20],v[20][20],best=0,c;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	v[0][0]=arr[0][0];
	for(int i=0;i<n-1;i++){
			v[0][i+1]=v[0][i]+arr[0][i+1];
	}
	for(int i=0;i<n-1;i++){
			v[i+1][0]=v[i][0]+arr[i+1][0];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			v[i][j]=arr[i][j]+v[i-1][j]+v[i][j-1]-v[i-1][j-1];
		}
	}
	
	for(int t=0;t<n;t++){
		for(int b=t;b<n;b++){
			for(int l=0;l<n;l++){
				for(int r=l;r<n;r++){
					c=v[b][r];
					if(t>0) c-=v[t-1][r];
					if(l>0) c-=v[b][l-1];
					if(t>0&&l>0) c+=v[t-1][l-1];
					best = max(best,c);
				}
			}
		}
	}


	cout<<best;
}
