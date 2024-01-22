#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
		int t, i, j;
		cin >> t;
		for(i = 1 ; i <= t ; i++){
			for(j = 0 ; j < t - i ; j++){
				cout << " ";
			}
			for(j = 1  ; j <= i ; j++){
				cout << char('A'+t-j);
			}
			for(j = i - 1  ; j >= 1  ; j--){
				cout << char('A'+t-j);
			}
			cout << "\n";
		}
		for(i = t - 1 ; i > 0 ; i--){
			for(j = 0 ; j < t - i ; j++){
				cout << " ";
			}
			for(j = 1  ; j <= i ; j++){
				cout << char('A'+t-j);
			}
			for(j = i - 1  ; j >= 1  ; j--){
				cout << char('A'+t-j);
			}
			cout << "\n";
		}
	}
}
