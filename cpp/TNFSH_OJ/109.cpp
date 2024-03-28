#include<iostream>

using namespace std;

int main(){
	
	int tb[6][6];
	tb[0][2] = 1;
	tb[0][5] = 2;
	tb[5][0] = 1;
	tb[5][2] = 2;
	tb[2][0] = 2;
	tb[2][5] = 1;

	int n, x = 0, y = 0;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		if(a == b) {x++,y++;}
		else if(tb[a][b]==1) x++;
		else y++;
	}
	if(x == y){
		cout << "The referee wins.\n";
	}else if(x < y){
		cout << "The princess wins.\n";
	}else{
		cout << "The prince wins.\n";
	}
}
