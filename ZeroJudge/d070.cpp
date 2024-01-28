#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	int y;
	while(cin >> y){
		if(y == 0){
			break;
		}
		if((!(y%4) && (y%100)) || !(y%400))
			cout << "a leap year\n";
		else
			cout << "a normal year\n";
	}
}

// 除了不是400的倍數的100的倍數以外，四的倍數的年份均為閏年。
