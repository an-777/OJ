#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;


int main(){
	map<string,string> m;

	m["HELLO"]="ENGLISH";
	m["HOLA"]="SPANISH";
	m["HALLO"]="GERMAN";
	m["BONJOUR"]="FRENCH";
	m["CIAO"]="ITALIAN";
	m["ZDRAVSTVUJTE"]="RUSSIAN";

	string s;
	int i = 0;
	while(cin >> s){
		i++;
		if(s == "#") break;
		if(m.find(s) == m.end()){
			cout << "Case " << i << ": " << "UNKNOWN\n";
		}else{
			cout << "Case " << i << ": " << m[s] <<"\n";
		}
	}
}

