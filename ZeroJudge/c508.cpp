#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int n, ary[100000];
	set<int,greater<int>> s;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ary[i];
		s.insert(ary[i]);
	}
	sort(ary,ary+n);
	for(int i = 0 ; i < n ; i++){
		cout << ary[i] << " ";
	}
	cout << "\n";
	for(const auto& it : s){
		cout << it << " ";
	}
}
