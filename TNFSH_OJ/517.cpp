#include<iostream>
#include<vector>
using namespace std;



int main() {
	int n, i, x = 0, y = 0;
	int tb[10][10];
	tb[0][0] = 1;
	tb[2][2] = 1;
	tb[5][5] = 1;
	
	tb[5][0] = 3;
	tb[2][5] = 3;
	tb[0][2] = 3;
	
	tb[0][5] = -1;
	tb[5][2] = -1;
	tb[2][0] = -1;
	
	int s[5];
	s[-1+1] = 3;
	s[3+1] = -1;
	s[1+1] = 1;
	vector<int> ary[2];
	cin >> n;
	
	ary[0].resize(n);
	ary[1].resize(n);
	
	for(i = 0 ; i < n ; i++){
		cin >> ary[0][i];
	}
	for(i = 0 ; i < n ; i++){
		cin >> ary[1][i];
	}
	for(i = 0 ; i < n ; i++){
		x += tb[ary[0][i]][ary[1][i]];
		y += s[tb[ary[0][i]][ary[1][i]]+1];
	}
	cout << x << " " << y;
	
}
