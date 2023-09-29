#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	
	while(cin>>n){
		int x=1,y=1,l=1;
		for(int i=1;i<n;i++){
				if(y==1){
					l++,y=l;x=1;
				}else{
					x++,y--;
				}
		}
		if(l%2==1){
			swap(x,y);
		}
		printf("TERM %d IS %d/%d\n",n,x,y);
	}
}
