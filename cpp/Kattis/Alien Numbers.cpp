#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s1,s2,s3;
	int q=1;
	while(cin>>s1>>s2>>s3){
		int l1=s1.size(),l2=s2.size(),l3=s3.size();
		int key [128]={0};
		string r="";
		for(int i=0;i<l2;i++){
			key[s2[i]+0]=i;
		}
		int t=0;
		for(int i=0;i<l1;i++){
			t=t*s2.size()+key[s1[i]+0];
		}
		for(int i=0;t>0;i++){
			r+=s3[t%l3];
			t/=l3;
		}
		int lr = r.size();
		cout<<"Case #"<<q<<": ";
		for(int i=lr-1;i>=0;i--){
			cout<<r[i];
		}
		cout<<"\n";
		q++;
	}
}
