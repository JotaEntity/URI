#include <iostream>
 
using namespace std;
 
int main() {
 
    long long fat[21];

    fat[0] = 1;
    for(int i = 1; i <= 20; i++){
        fat[i] = fat[i-1]*i;
    }    
 
     int n1, n2;
     
     while(cin >> n1 >> n2 ){
     	  printf("%lld\n", fat[n1] + fat[n2]);
     	
	 }
    return 0;
}
