#include <iostream>

using namespace std;
int pry[100000];
int aryn[100000];

int pre(int n){
	pry[0] = 0;
	for(int i = 1 ; i <= n ; i++){
		pry[i] = pry[i-1] + aryn[i-1];
	}
}

int main(){
	int n, m;
	while(cin >> n >> m){
		for(int i = 0 ; i < n ; i++){
			cin >> aryn[i];
		}
		pre(n);
		int x, y;
		while(m--){
			cin >> x >> y;
			cout << pry[y] - pry[x-1] << "\n";
		}
	}
	
}
