#include<iostream>

using namespace std;

int main(){
    long long int x, y, sum = 2;
    cin >> x >> y;
    while(sum % x){
        sum = sum * 2 + 1;
    }
    
    if(sum % y) cout << "left\n";
    else cout << "right\n";
}
