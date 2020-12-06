#include <iostream>
 
using namespace std;
 
int main() {
 
    int C = 6, Pos=0;
	double N;
    while(C--){	
   cin >> N;
   if (N>=0.0){
   	Pos++;
   }
}
   cout << Pos << " valores positivos" << endl;
	return 0;
}
