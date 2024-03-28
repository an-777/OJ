#include <iostream>

using namespace std;

int main(){
	string s, t;
	getline(cin,s);
	getline(cin,t);
	for(int i = 0 ; i < s.size() ; i++){
		string res = "";
		while(s[i]!= ' ' && i != s.size()){
			res+=s[i];
			i++;
		}
		cout << t << ", " << res << "\n";
	}
}
