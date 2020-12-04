#include <iostream>
#define V 1000
#include <stdio.h>
#include <string.h>

 int grafo[V][V];
 int visitas[V];
 int lidas = 0;
using namespace std;
void profundidade(int v, int a){
	visitas[v] = 1;             
	
	for (int i = 0; i < a; i++){
		if (grafo[v][i] == 1 && visitas[i] == -1){
			lidas++;
			profundidade(i, a);
		}
	}
}
void iniciar(int v1, int v2){
	
		grafo[v1][v2] = 1;  
     	grafo[v2][v1] = 1;
	
}

 
int main(){
  int v, t, a, y, x, inicio;
  
  cin >> t;
  
  while(t--){
  	lidas=0;
  	memset(visitas, -1, sizeof(visitas));
  	memset(grafo, -1, sizeof(grafo));
	cin >> inicio;
  	cin >> v >> a;
  	
     for (int i = 0; i < a; i++){
     	cin >> x >> y;
        iniciar(x, y);
	 }
	 
	 profundidade(inicio, v);
	 lidas*= 2;
	 cout << lidas << endl;
  	
  	
  	
  	
  	
  }	
}
