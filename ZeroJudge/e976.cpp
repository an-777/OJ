#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main(){
	int h, m, s;
	while(cin >> h >> m >> s){
		if(h*s >= m){
			printf("%d %d %d. I will make it!\n", h, m, s);
		}else{
			printf("%d %d %d. I will be late!\n", h, m, s);
		}
	}
}
