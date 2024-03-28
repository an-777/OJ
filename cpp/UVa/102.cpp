// Problem: 102 Ecological Bin Packing
// Contest: UVa
// URL: https://onlinejudge.org/external/1/102.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int b[3][3];
	while(cin>>b[0][0]>>b[0][1]>>b[0][2]){
		int mini=2e9,c;
		string mins;
		for(int i=1;i<3;i++){
			cin>>b[i][0]>>b[i][1]>>b[i][2];
		}
//BGC		
		c=b[0][0]+b[0][2]+   b[1][1]+b[1][0]+ b[2][1]+b[2][2];
		if(mini>=c) mini=c,mins="GCB";
		c=b[0][0]+b[0][2]+   b[1][1]+b[1][2]+ b[2][1]+b[2][0];
		if(mini>=c) mini=c,mins="GBC";
		
		c=b[0][1]+b[0][0]+   b[1][2]+b[1][0]+ b[2][2]+b[2][1];
		if(mini>=c) mini=c,mins="CGB";
		c=b[0][1]+b[0][0]+   b[1][2]+b[1][1]+ b[2][2]+b[2][0];
		if(mini>=c) mini=c,mins="CBG";
		
		c=b[0][1]+b[0][2]+   b[1][0]+b[1][2]+ b[2][0]+b[2][1];
		if(mini>=c) mini=c,mins="BGC"; 
		c=b[0][1]+b[0][2]+   b[1][0]+b[1][1]+ b[2][0]+b[2][2];
		if(mini>=c) mini=c,mins="BCG";
    
		cout<<mins<<" "<<mini<<"\n";		
	}
}
