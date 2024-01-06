#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	vector<int> ary;
	cin >> n;
	ary.resize(n);
	for(int i = 0; i <n; i++){
		cin>>ary[i];
	}
	for(auto it = ary.end()-1;it!=ary.begin()-1;--it){
		cout<<*it<<"\n";
	}
}
