#include<iostream>

using namespace std;

int main(){
	int n, x, y;
	cin >> n;
	while(n--){
		cin >> x >> y;
		while((x %= y) && (y %= x)){}
		cout << x + y << "\n";
	}
}
