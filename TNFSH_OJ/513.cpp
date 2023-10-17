// Problem: 513 / 工時計算
// Contest: TNFSH Online Judge
// URL: https://toj.tfcis.org/oj/pro/513/
// Memory Limit: 524288 kB
// Time Limit: 1000 ms

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int h1,h2,m1,m2,h,m;
	cin>>h1>>m1>>h2>>m2;
	if(m2<m1) {m=(60-m1+m2)%60;h2-=1;}
	else m=m2-m1;
	h=(h2-h1+24)%24;
	printf("totally %d hours and %d minutes.\n",h,m);
}
