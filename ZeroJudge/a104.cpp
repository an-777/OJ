#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	vector<int> ary;
	while(cin >> n){
		ary.clear();
		ary.resize(n);
		for(int i = 0 ; i < n ; i++){
			cin >> ary[i];
		}
		sort(ary.begin(),ary.end());
		for(int i = 0 ; i < n ; i++){
			cout << ary[i] << " ";
		}
		cout << "\n";
	}
}
