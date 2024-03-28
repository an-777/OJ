#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n, ary[6] = {0}, k = 0;
	double a = 0;
	while(cin >> n){
		if(n == 0) break;
		ary[n]++;
		a+=n;
		k++;
	}
	a /= k;
	for(int i = 5 ; i > 0 ; i--){
		cout << i << " (" ;
		if(ary[i]<10) cout << " ";
		cout << ary[i] << ") |";
		
		for(int j = 0 ; j < ary[i] ; j++){
			cout << "=";
		}
		cout << "\n";
	}
	cout << fixed << setprecision(4) << "Average rating: " << a;

}
