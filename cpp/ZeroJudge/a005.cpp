#include<iostream>

using namespace std;

int main(){
	int n, ary[5];
	cin >> n;
	while(n--){
		for(int i = 0 ; i < 4 ; i++){
			cin >> ary[i];
		}
		for(int i = 0 ; i < 4 ; i++){
			cout << ary[i] << " ";
		}
		if(ary[3] - ary[2] == ary[2] - ary[1]){
			cout << ary[3] + ary[3] - ary[2] << "\n";
		}else{
			cout << ary[3] * ary[3] / ary[2] << "\n";
		}
	}
}
