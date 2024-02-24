#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	while((a%=b) && (b%=a)){
	}
	if(a == 0) 
		cout << b << "\n";
	if(b == 0)
		cout << a << "\n";

}
