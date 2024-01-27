#include <iostream>
#include <set>
using namespace std;

int main(){
	string s;
	set<string> st;

	while(getline(cin,s)){
		if(st.find(s) == st.end()){
			st.insert(s);
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
    return 0;
}
