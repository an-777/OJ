#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string,int> m;
	m.insert({"Sunday",0});
	m.insert({"Monday",1});
	m.insert({"Tuesday",2});
	m.insert({"Wednesday",3});
	m.insert({"Thursday",4});
	m.insert({"Friday",5});
	m.insert({"Saturday",6});
	
	string s;
	cin >> s;
	
	auto it =  m.find(s);
	if(it != m.end()){
		cout << (*it).second << "\n";
	}else{
		cout << "error" << "\n";
	}
    return 0;
}
