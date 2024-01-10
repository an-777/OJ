#include<iostream>

using namespace std;

int main(){
		string s;
		while(getline(cin,s)){
			int r = 0;
			for(auto it = begin(s) ; it != end(s) ; ++it){
				if(*it >= '0' && *it <= '9')
					r = r + *it - '0';
			}
			cout << r << "\n";
		}
		
}
