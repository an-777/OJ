#include<iostream>

using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		string t;
		t = s;
		bool isC = true ;
		for(auto it = s.begin();it != s.end();++it){
			if(*it >= 'A' && *it <= 'Z'){
				*it = *it + 32;
			}
		}
		for(int l = 0, r = s.size() -1 ; l <= r ; l++,r--){
		 	while(s[l] > 'z' || s[l] < 'a'){
		 		l++;
		 	}
		 	while(s[r] > 'z' || s[r] < 'a'){
		 		r--;
		 	}
		 	
		 	if(s[l] != s[r])isC = false;
		 }
		 if(isC){
		 	cout<<"SETUP! "<<t<<"\n";
		 }else{
		 	cout<<t<<"\n";
		 }
	}
}
