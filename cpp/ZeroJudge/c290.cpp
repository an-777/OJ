#include <iostream>
using namespace std;

int main(){
	string s;
	int a = 0, b = 0;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++){
		if(i%2 == 0){
			a += s[i]-'0';
		}else{
			b += s[i]-'0';
		}
	}
	cout << abs(b-a);
}
