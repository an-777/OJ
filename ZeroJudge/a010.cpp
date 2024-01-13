#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n, cnt = 0, f = 0;
	cin >> n;
	
	for(int i = 2 ; i <= sqrt(n) + 1 ; i++){
		cnt = 0;
		while(!(n%i)){
			cnt++;
			n /= i;
		}
		if(cnt){
			if(f){
				cout << " * ";
			}
			f = 1;
			
			cout << i;
			if(cnt > 1){
				cout << "^" << cnt;
			}
		}
	}
	if(n > 1){
		if(f){
			cout << " * ";
		}
		cout << n;
	}
}
