#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	double dx = c*e - f*b;
	double dy = a*f-c*d;
	double dd = a*e - b*d;
	double x = dx/dd;
	double y = dy/dd;

	if(dd == 0){
		if(dx!=0 && dx !=0){
			cout << "No answer\n";
		}else{
			cout << "Too many\n";
		}
	}else{
		printf("x=%.2f\ny=%.2f\n",x,y);
	}
}
