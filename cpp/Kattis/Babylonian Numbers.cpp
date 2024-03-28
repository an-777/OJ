// Problem: Babylonian Numbers
// Contest: kattis
// URL: https://open.kattis.com/problems/babylonian
// Memory Limit: 1024 mb 
// Time Limit: 1000 ms

#include <iostream>
using namespace std;

int main(){
	string s;
	unsigned long long int k,t;
	cin>>s;
	while(cin>>s){
		k=0,t=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==','){
				t=t*60+k;
				k=0;
			}else{
				k=k*10+s[i]-'0';
			} 
			if(i==s.size()-1){
					t=t*60+k;
				}
		}

		cout<<t<<"\n";
	}
}
