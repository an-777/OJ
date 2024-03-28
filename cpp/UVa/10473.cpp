// Problem: 10473 Simple Base Conversion
// Contest: UVa
// URL: https://onlinejudge.org/external/104/10473.pdf
// Memory Limit: 
// Time Limit: 3000 ms

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int main(){
	string s;
	int b,n;
	stringstream ss,sss;
	while(cin>>s){
		if(s[0]=='-') break;
		if(s[1]!='x'){
			ss.clear();
			ss.str("");
			ss<<s;
			ss>>setbase(10)>>n;
			cout<<setbase(16)<<uppercase<<"0x"<<n<<"\n";
		}
		if(s[1]=='x'){
			sss.clear();
			sss.str("");
			sss<<s;
			sss>>setbase(16)>>n;
			cout<<setbase(10)<<n<<"\n";
		}

	}
}
