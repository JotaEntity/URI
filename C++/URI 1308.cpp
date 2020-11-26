#include <math.h>
#include <iostream>

using namespace std;

int main(){
	
	
	int n,i;
	long long int g;
	double f,v;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> g;
	    v = 1 + 8*g;
	    f = (-1 + sqrt(v)) / 2;
	    printf("%d\n", (int)f);
	    
	}
	return 0;
}
