#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	int s;
	cin >> s;
	if(s <= 10){
		s *=6;
	}
	else if(s <= 20){
		s = (s - 10) * 2 + 60;
	}
	else if(s <= 40){
		s = (s - 20) * 1 + 80;
	}
	else {
		s = 100;
		}
	cout << s;
}
