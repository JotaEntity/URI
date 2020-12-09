#include <iostream>
 
using namespace std;
 
int main() {
 
    long long n;
    
    while(cin >> n&&n){
    	long long a = 0, b = 1, c = 0;
    	
    	for (long long i = 1; i<=n; i++){
    		c=a+b;
    		a=b;
    		b=c;
		}
		cout << c << endl;
    	
    	
	}
 
    return 0;
}
