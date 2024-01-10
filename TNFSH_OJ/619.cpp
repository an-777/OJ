#include<iostream>

using namespace std;

int main(){
		int t, n, k;
		cin >> t;
		while(t--){
			int sum = 0;
			cin >> n;
			while(n--){
				cin >> k;
				sum += k;
			}
			cout << sum << "\n";
		}
}
