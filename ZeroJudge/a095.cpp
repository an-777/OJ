#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m)
		cout << (n == m ? m : m+1) << "\n";
}
