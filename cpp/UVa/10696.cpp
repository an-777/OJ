#include<iostream>
using namespace std;

int f(int i){
	if(i>100) return i-10;
	else  return f( f( i+11) );
}
int main(){
	int n;
	while(cin>>n){
		if (n==0) break;
		int c = f(n);
		cout<<"f91("<<n<<") = "<<c<<"\n";
	}
}
