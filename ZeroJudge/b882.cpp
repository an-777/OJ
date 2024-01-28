#include <iostream>
#include <sstream>
using namespace std;

int main(){
	stringstream sss;
	long long int h, m, s;
	string ss, sm, sh;
	cin >> h >> m >> s;
	m += s/60;
	s%=60;
	h += m/60;
	m%=60;
	h%=24;
	sss<<s;
	sss>>ss;
	if(s < 10){
		ss = '0' + ss;
	}
	sss.clear();
	sss.str("");
	sss<<m;
	sss>>sm;
	if(m < 10){
		sm = '0' + sm;
	}
	sss.clear();
	sss.str("");
	sss<<h;
	sss>>sh;
	if(h < 10){
		sh = '0' + sh;
	}
	cout << sh << ":" << sm << ":" << ss << "\n";
}
