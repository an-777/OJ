// Problem: 10473 Simple Base Conversion
// Contest: UVa
// URL: https://onlinejudge.org/external/104/10473.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;
int main(){
	int x,y,d,n,r,s;
	string key[3] = {"Right","Left","Forward"},ts[99];
	cin>>r>>s>>n;
	for(int i=0;i<n;i++){
		cin>>ts[i];
	}
	
	for(int i=0;i<n;i++){
		for(int k=0;k<3;k++){
			x=0,y=0,d=0;
			for(int j=0;j<n;j++){
				if(j!=i){
					if(ts[j][0]=='R') d=(d+1)%4;
					if(ts[j][0]=='L') d=(d+3)%4;
					if(ts[j][0]=='F'){
						if(d==0) y+=1;
						else if(d==1) x+=1;
						else if(d==2) y-=1;
						else if(d==3) x-=1;
					}
				}else{
					if(k==0) d=(d+1)%4;
					if(k==1) d=(d+3)%4;
					if(k==2){
						if(d==0) y+=1;
						else if(d==1) x+=1;
						else if(d==2) y-=1;
						else if(d==3) x-=1;
					}
				}
				// cout<<x<<" "<<y<<"\n";
			}
			if(x==r && y==s) { cout<<i+1<<"\n"<<key[k]; return 0;}
			// cout<<i+1<<" "<<k<<" "<<x<<" "<<y<<"\n";
			// cout<<"\n\n\n";			
		}
	}
}
