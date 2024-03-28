#include <stdio.h>
using namespace std;

int main(){
	int n, t;
	int ary[100] = {0};
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&t);
		ary[t-1]++;
	}
	t = 0;
	for(int i = 0 ; i < n ; i++){
		while(ary[t] == 0) t++;
		ary[t]--;
		printf("%d ",t+1);
	}
	printf("\n");
}
