#include <iostream>
#include <algorithm>

using namespace std;
int ary[1000000];
int main(){
	int n,k,i,t;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ary[i];
	}
	sort(ary+0,ary+n);
	
	cin>>k;
	while(k--){
		cin>>t;
		int res=-1,m,r=n-1,l=0;
		while(l<=r){
			m=(r+l)/2;
			if(ary[m]==t) {
				res = m;
				break;
			}
			if(ary[m]>t){
				r = m-1;
			}else{
				l = m+1;
			}
		}
		if(res!=-1){
			cout<<ary[res]<<"\n";
		}else{
			if(l==0){
				cout<<"no "<<ary[l]<<"\n";
			}else if(r==n-1){
				cout<<ary[r]<<" no\n";
			}else{
				cout<<ary[r]<<" "<<ary[l]<<"\n";
			}
		}
	}
}
