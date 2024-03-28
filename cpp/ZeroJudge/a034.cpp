#include <iostream>
using namespace std;

int main(){
	int n, res[999];
	while(cin >> n){
		int i = 0;
		while(n > 0){
			res[i] = n % 2;
			n/=2;
			i++;
		}
		while(i--){
			cout << res[i];
		}
		cout << "\n";
	}
}


