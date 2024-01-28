#include <iostream>

using namespace std;

int main(){
	int n, ary[9999];
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ary[i];
	}
	for(int i = n - 1 ; i >= 0; i--){
		cout << ary[i] << " ";
	}
	cout << "\n";
}
