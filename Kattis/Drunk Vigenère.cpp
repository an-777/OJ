// Problem: Drunk Vigenère
// Contest: Kattis
// URL: https://open.kattis.com/problems/drunkvigenere?tab=submissionsorg/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=325
// Memory Limit: 1024 mb
// Time Limit: 1000 ms
//O(1)

#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(i%2==0){
            s1[i]=char((s1[i]-(s2[i]-'A')-'A'+26)%26+'A');
        }else{
            s1[i]=char((s1[i]+(s2[i]-'A')-'A'+26)%26+'A');
        }
    }
    cout<<s1;
    }
