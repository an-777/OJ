#include<iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	for(int i = 3, j = 5, k = 7; i + j + k <= a; i+=3, j+=5, k+=7){
		cout << i << " " << j << " " << k << "\n";
	}
}
