// Problem: 11879:  Multiple of 17
// Contest: UVa
// URL: https://onlinejudge.org/external/118/11879.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

int main(){
	string s;
	while(cin>>s){
		if(s=="0") break;
		int t=0;
		for(int i=0;i<s.size();i++){
			t=(t*10+s[i]-'0')%17;
		}
		
		cout<<!t<<"\n";
	}
}
