// Problem: 10929: You can say 11
// Contest: UVa
// URL: https://onlinejudge.org/external/109/10929.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		if(s=="0") break;
		int a=0,b=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				a+=s[i]-'0';
			}else{
				b+=s[i]-'0';
			}
		}
		if((a-b)%11==0) cout<<s<<" is a multiple of 11.\n";
		else cout<<s<<" is not a multiple of 11.\n";
	}
}
