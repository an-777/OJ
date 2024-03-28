#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, x, y;
	cin >> n;
	while(n--){
		scanf("%o %o",&x ,&y);
		printf("%X\n",x+y);
	}
}
