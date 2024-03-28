#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	cout << ((b%a == 0) ? (b/a) : (b/a+1)) << "\n";
}
