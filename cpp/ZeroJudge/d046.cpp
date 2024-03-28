#include <iostream>

using namespace std;

int main(){
	int n, t, s = 0;
	cin >> n;
	while(n--){
		cin >> t;
		if(t <= 10) s++;
	}
	cout << s << "\n";	
}
