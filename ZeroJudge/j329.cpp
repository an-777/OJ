#include <iostream>

using namespace std;

int main(){
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	if(s3 == "yes"){
		cout << s1 << "想和" << s2 << "絕交\n";
	}else{
		cout << s1 << "不想和" << s2 << "絕交\n";		
	}
}
