#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	int n, sum;
	while(cin >> n){
		sum = 0;
		for(int i = 0 ; i < n ; i++){
			int s;
			cin >> s;
			sum+=s;
		}
		if(sum > 59*n){
			cout << "no\n";
		}else{
			cout << "yes\n";
		}
	}
}
