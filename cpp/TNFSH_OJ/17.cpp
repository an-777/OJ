#include<iostream>
using namespace std;
int main(){
        int n;
        while(cin >> n){
          for(int i = 1 ; i <= n ; i++){
                  for(int j = 0 ; j < n- i ; j++){
                          cout << " ";
                  }
  
                  for(int j = 0 ; j < i ; j++){
                          cout << char('A'+j);
                  }
                  for(int j = i-2 ; j >= 0  ; j--){
                          cout << char('A'+j);
                  }
                  cout << "\n";
          }
  
          for(int i = n-1 ; i >= 1 ; i--){
                  for(int j = 0 ; j < n- i ; j++){
                          cout << " ";
                  }
  
                  for(int j = 0 ; j < i ; j++){
                          cout << char('A'+j);
                  }
                  for(int j = i-2 ; j >= 0 ; j--){
                          cout << char('A'+j);
                  }
                  cout << "\n";
          }
        }
        return 0;
}
