#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int t, ans = 1;
		cin >> t;
		if(t == 0) ans=0;
		while(t > 0){
			int k = t%10;
			ans*=k;
			t/=10;
		}
		cout << ans << "\n";
	}
}
