#include<iostream>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	while(a<c){
		a += b;
	}
	cout << a <<"\n";
}
