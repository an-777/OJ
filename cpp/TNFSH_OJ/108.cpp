#include<iostream>

using namespace std;

int main(){
	int a, b, c, sum=0;
	cin >> a >> b >> c;
	sum = a;
	while(b--){
		int x, y;
		cin >> x >> y;
		sum += x * y;
	}
	sum -= c;
	
	cout << sum/4 << "\n";
}
