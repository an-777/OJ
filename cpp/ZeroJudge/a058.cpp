#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main(){
	int n, tb[3] = {0};
	cin >> n;
	while(n--){
		int t;
		cin >> t;
		tb[t%3]++;
	}
	for(const auto& it : tb){
		cout << it << " ";
	}
}

