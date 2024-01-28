#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int f(int n){
	return (n*(n+1))/2;
}
int main(){
	int x;
	while(cin >> x){
		cout << f(x - 1) + 1<< "\n";
	}
}
