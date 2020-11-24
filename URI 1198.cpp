#include <iostream>
 
using namespace std;
 
int main() {
 
 int a, b, resultado;
 
 while(scanf("%i", &a) != EOF){
     scanf("%i", &b);
     
     if (a > b){
         resultado = a-b;
         printf("%i", resultado);
         }else {
             resultado = b-a;
             printf("%i", resultado);
         }
     }
 
    return 0;
}
