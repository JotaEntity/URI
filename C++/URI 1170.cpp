#include <iostream>
 
using namespace std;
 
int main() {
 
   int n, dias;
   float contador;
   scanf("%i", &n);
   
   for (int i =0; i < n; i++){
       scanf("%f", &contador);
       dias = 0;
       while(contador > 1){
           contador /=2;
           dias++;
           
       }
       printf("%d dias\n", dias);
   }
 
    return 0;
}
