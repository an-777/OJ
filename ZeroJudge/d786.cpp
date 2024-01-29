#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, t, s = 0, k;
	cin >> n;
	while(n--){
		cin >> t;
		s = 0;
		for(int i = 0 ; i < t ; i++){
			cin >> k;
			s+=k;
		}
		cout << fixed << setprecision(2) << double(s)/t << "\n";
	}
}
