#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long int n,m=9e10;
	cin>>n;
	for(long long int i=pow(n,0.5);i>=1;i--){
		if(n%i!=0) continue;
		long long int a=i,b=n/i;
		long long int p=0,q=0;
		
		while(a>0){p++;a/=10;}
		while(b>0){q++;b/=10;}
		
		p = max(p,q);
		
		m=min(m,p);
		break;
	}
	cout<<m;
}
