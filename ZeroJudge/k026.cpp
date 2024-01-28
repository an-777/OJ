#include <iostream>
using namespace std;

int main(){
	int n, ary[10000];
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ary[i];
	}
	if(n%2 == 0){
		cout << (ary[n/2] + ary[n/2-1])/2 << "\n";
	}else{
		cout << ary[n/2];
	}
}
