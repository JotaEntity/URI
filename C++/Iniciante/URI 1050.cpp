#include <iostream>
#include <locale.h>
#include <locale>
 
using namespace std;
 
int main() {
   setlocale(LC_CTYPE, "");
   int DDD;
   cin >> DDD;
   
   switch(DDD){
   	case 61:
   	cout << "Brasilia" << endl;
   	break;
   	case 71:
   	cout << "Salvador" << endl;
   	break;
   	case 11:
   	cout << "São Paulo" << endl;
   	break;
   	case 21:
   	cout << "Rio de Janeiro" << endl;
   	break;
   	case 32:
   	cout << "Juiz de Fora" << endl;
   	break;
   	case 19:
   	cout << "Campinas" << endl;
   	break;
   	case 27:
   	cout << "Vitoria" << endl;
   	break;
   	case 31:
   	cout << "Belo Horizonte" << endl;
   	break;
   }
    return 0;
}
