#include <iostream>

using namespace std;

int main(){
	int n, m = -1, k;
	cin >> n;
	while(n--){
		cin >> k;
		m = max(m, k);
	}
	cout << m << "\n";
}
