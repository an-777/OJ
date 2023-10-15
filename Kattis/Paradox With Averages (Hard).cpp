// Problem: Delicious Bubble Tea
// Contest: UVa
// URL: https://open.kattis.com/problems/bubbletea
// Memory Limit: 256 mb 
// Time Limit: 1000 ms

#include <iostream>
using namespace std;
int main(){
	int n,a,b,arr1[200000],arr2[200000],k;
	double aver1,aver2;
	cin>>n;
	for(int i=0;i<n;i++){
		k=0,aver1=0,aver2=0;
		cin>>a>>b;
		for(int j=0;j<a;j++){
			cin>>arr1[j];
			// cout<<arr1[j]<<";";
			aver1+=arr1[j];
		}
		// cout<<"\n";
		aver1/=a;
		for(int j=0;j<b;j++){
			cin>>arr2[j];
			aver2+=arr2[j];
		}
		aver2/=b;
		
		for(int j=0;j<a;j++){
			// cout<<j<<":  ";
			// cout<<arr1[j]<<" "<<aver1<<" "<< arr1[j]<<" "<<aver2<<"\n";
			if(arr1[j]<aver1 && arr1[j]>aver2) k++;
		}
		
		cout<<k<<"\n";
	}
}
