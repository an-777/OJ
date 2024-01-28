#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	long long int a, b, c;
	while(cin >> a >> b >> c){
		b += min(a/10,c/2);
		printf("%d 個餅乾，%d 盒巧克力，%d 個蛋糕。\n", a, b, c);
	}
}
