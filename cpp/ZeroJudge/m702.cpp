#include <stdio.h>
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n, t;
	string s;
	map<string,int> m;
	cin >> n >> t;
	while(n--){
		cin >> s;
		m[s]++;
	}
	vector<pair<int,string>> ary;
	
	for(auto it = m.begin() ; it != m.end() ; ++it){
		pair<int,string> p;
		p.first = it -> second;
		p.second = it -> first;
		ary.push_back(p);
	}
	
	sort(ary.begin(),ary.end(),greater<pair<int,string>>());
	
	for(int i = 0 ; i < t ; i++){
		cout << ary[i].second << " ";
	}
	
}
