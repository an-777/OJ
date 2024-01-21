#include <iostream>

using namespace std;

int main(){
    int ary[9999], n, k, t;
    cin >> n;
    while(n--){
        cin >> k;
        cin >> ary[k];
    }
    cin >> n;
    while(n--){
        cin >> k >> t;
        if(t == ary[k]*k){
        	
            cout << "The shopkeeper is honest.\n";
        }else{
            cout << t - ary[k]*k << "\n";
        }
    }
    return 0;
}
