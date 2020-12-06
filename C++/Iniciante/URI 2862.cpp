#include <iostream>
 
using namespace std;
 
int main() {

   int C, N;
   cin >> C;
   
   while(C--){
   	cin >> N;
    if (N > 8000){
    	cout << "Mais de 8000!" << endl;
	} else {
		cout << "Inseto!" << endl;
	}
   }
    return 0;
}
