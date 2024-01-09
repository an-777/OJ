#include<iostream>
#define PI 3

using namespace std;

int main(){
	int a;
	cin >> a;
	a = PI * a * a * 0.5 - a * a;
	cout << a <<"\n";
}
