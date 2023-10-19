// Problem: 445: Marvelous Mazes
// Contest: UVa
// URL: https://onlinejudge.org/external/4/445.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;

int main(){
	string s;
	int t;
	while(getline(cin,s)){
		int k=0;
		for(int i=0;i<s.size();i++){
			if( s[i]=='!'){
				cout<<"\n";
				k=0;
			}else if(s[i]>='0' && s[i]<='9'){
				k+=s[i]-'0';
			}else if(s[i]=='b'){
				for(int j=0;j<k;j++){
					cout<<" ";
				}
				k=0;
			}else{
				for(int j=0;j<k;j++){
					cout<<s[i];
				}
				k=0;
			}
		}
		cout<<"\n";
	}
}
