#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == -1 && b == -1) break;
		
		cout << min(((a-b+100)%100),((b-a+100)%100)) << "\n";
	}
}
