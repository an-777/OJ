#include <iostream>
using namespace std;
int main(){
    int n,r,t;
    while(cin>>n>>r){
        t=0;
        if(n==r) {cout<<"*\n";t=1;}
        int arr[n]={0};
        for(int i=0;i<r;i++){
            int c;
            cin>>c;
            arr[c-1]=1;
        }
        if(t)continue;
        for(int i=0;i<n;i++){
            if(!arr[i]) 
                cout<<i+1<<" ";
        }
        cout<<"\n";
    }
}
