#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x1, y1, x2, y2, r1, r2;
    while(cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2){
    	if(sqrt(pow((x2-x1),2)+pow((y2-y1),2)) <= r1+r2){
    	cout << "Quick in\n";
	    }else{
	    	cout << "Nearly\n";
	    }
    }
    return 0;
}
