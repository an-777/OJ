// Problem: 10878: Decode the tape
// Contest: UVa
// URL: https://onlinejudge.org/external/108/10878.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

int main(){
	string s;
	int t;
	while(getline(cin,s)){
		if(s=="___________") continue;
		int t=0;
		for(int i=2;i<s.size()-1;i++){
			if( s[i]=='o'){
				t=t*2+1;
			}else if(s[i]==' '){
				t=t*2;
			}
		}
		cout<<char(t);
	}
}
