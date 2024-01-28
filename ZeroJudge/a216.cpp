#include <iostream>

long long int tbf[100000][2]={0};
long long int tbg[100000][2]={0};

long long int f(long long int n){
	if(n == 1) return 1;
	if(tbf[n][0] == 0){
		tbf[n][0] = 1;
		tbf[n][1] = n + f(n-1);
	}
	return tbf[n][1];
}
long long int g(long long int n){
	if(n == 1) return 1;
	if(tbg[n][0] == 0){
		tbg[n][0] = 1;
		tbg[n][1] = f(n) + g(n-1);
	}
	return tbg[n][1];
}
using namespace std;
int main(){
	long long int  n;
	while(cin >> n){
		cout << f(n) << " " << g(n) << "\n";
	}
}
