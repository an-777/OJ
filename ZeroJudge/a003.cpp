#include<iostream>

using namespace std;

int main(){
	int a, b;
	string tb[3] = {"普通", "吉", "大吉"};
	cin >> a >> b;
	cout << tb[(a*2+b)%3] << "\n";
}
