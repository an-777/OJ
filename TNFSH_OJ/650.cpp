#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n-i-1 ; j++){
			cout << " ";
		}
		for(int j = 0 ; j <= i ; j++){
			cout << char('A'+j);
		}
		cout << "\n";
	}
	for(int i = n-2 ; i >= 0 ; i--){
		for(int j = 0 ; j < n-i-1 ; j++){
			cout << " ";
		}
		for(int j = 0 ; j <= i ; j++){
			cout << char('A'+j);
		}
		cout << "\n";
	}
}
