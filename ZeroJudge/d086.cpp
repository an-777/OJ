#include <iostream>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		if(s == "0") break;
		int sum = 0;
		bool error = false;
		for(const auto& it : s){
			if(it >= 'a' && it <='z'){
				sum+=it - 'a' + 1;
			}else if(it >= 'A' && it <='Z'){
				sum+=it - 'A' + 1;
			}else{
				error = true;
				break;
			}
		}
		if(error){
			cout << "Fail\n";
		}else{
			cout << sum << "\n";
		}
	}
}
