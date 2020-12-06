#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
 int N, C;
 
  cin >> C;
  
  while(C--){
      cin >> N;
      
      N-= floor(sqrt(N));
      cout << N << endl;
      
  }
 
    return 0;
}
