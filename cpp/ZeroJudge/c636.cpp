#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main(){
	string tb[12] = {"鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗", "豬"};
	int n;
	while(cin >> n){
		if(n>0)
			cout << tb[(n+1911 - 4)%12] << "\n";
		else
			cout << tb[(n+1912 - 4)%12] << "\n";
	}
}
