#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	int n,i;
	int matriz[100];
	for (i = 2; i <= 100; i++){
		matriz[i] =  matriz[i-1] + i * i;
	}
	while (scanf("%d",&n) && n != 0){
		n = matriz[n];
		cout << n << endl;
	}
	return 0;
}
