#include <iostream>
using namespace std;

int main(){
	int n, t;
	while(cin >> n){
		int ary[101]={0};
		while(n--){
			cin >> t;
			ary[t]++;
		}
		for(int i = 0 ; i < 101 ; i++){
			while(ary[i] != 0){
				cout << i << " ";
				ary[i]--;
			}
		}
		cout << "\n";
	}
}
