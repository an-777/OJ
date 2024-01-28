#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string p, tb[4]={"WEAK", "ACCEPTABLE", "GOOD", "STRONG"};
	while(cin >> p){
		int s = 0;
		if(p.size() >= 8){
			s++;
		}
		int b = 0, m = 0;
		for(int i = 0 ; i < p.size() ; i++){
			if(p[i] >= 'A' && p[i] <= 'Z'){
				b = 1;
			}
			if(p[i] >= 'a' && p[i] <= 'z'){
				m = 1;
			}
		}
		if(b == 1 && m == 1){
			s++;
		}
		int e = 0, f = 0;
		for(int i = 0 ; i < p.size() ; i++){
			if(!(p[i] >= 'A' && p[i] <= 'Z') && !(p[i] >= 'a' && p[i] <= 'z')){
				f = 1;
			}
			if((p[i] >= 'A' && p[i] <= 'Z') || (p[i] >= 'a' && p[i] <= 'z')){
				e = 1;
			}
		}
		if(e == 1 && f == 1){
			s++;
		}
		
        

		cout << "This password is " << tb[s] << "\n";
	}
}
