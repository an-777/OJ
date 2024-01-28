#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if(b == 0 || a%b==0){
		cout << "OK!\n";
	}else{
		cout << a%b << "\n";
	}
}
