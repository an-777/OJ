#include <iostream>
#include <iomanip>
using namespace std;



int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		int x, y;
		cin >> x >> y;
		if(x%2 == 0){
			x++;
		}
		if(y%2 == 0){
			y--;
		}
		y = (y+1)/2;
		x = (x+1)/2-1;
		cout << "Case " << i << ": " << y*y - x*x << "\n";
	}
}
