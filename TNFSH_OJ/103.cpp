#include<iostream>

using namespace std;

int main(){
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	bool x = false, y = false;
	if(s1 == s3) x = true;
	if(s2 == s4) y = true;
	
	if(x && y) cout << "GOOD\n";
	else if(!x && !y) cout << "OTZ\n";
	else cout << "=~=\n";
}
