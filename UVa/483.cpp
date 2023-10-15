// Problem: 264 - Count on Cantor
// Contest: UVa
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=424
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		int r,l=0;
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
				r=i-1;
				for(int j=r;j>=l;j--){
					cout<<s[j];
				}
				l=r+2;
				cout<<" ";
			}else if(i==s.size()-1){
				r=i;
				for(int j=r;j>=l;j--){
					cout<<s[j];
				}
			}
		}
		cout<<"\n";
	}
}
