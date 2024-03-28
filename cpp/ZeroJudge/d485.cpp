#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main(){
	int x, y;
	cin >> x >> y;
	if(x%2 == 0){
		x--;
	}
	if(y%2 == 0){
		y++;
	}
	cout << abs((y - x)/2) << "\n";
}
