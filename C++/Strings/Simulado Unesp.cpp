#include <iostream>
#include <stack>

using namespace std;
using std::string;

int main(){
    
    int n, i;
    std::string linha;
    stack<char> lista;
    
    scanf("%i", &n);
    
    while(n--){
    	
    	  getline(cin, linha);
    	
    	if (lista.size() > 0){
    		lista.pop();
		}
		for (i=0; i < linha.size(); i++){
			if (linha[i] == '[' || linha[i] == '('){
				lista.push(linha[i]);
					
				} else if (lista.empty()){
					lista.push('E');
					break;
				} else if(linha[i] == ')' || lista.top() == '('){
					lista.pop();
				} else if(linha[i] == ']' || lista.top() == '['){
					lista.pop();
				} else {
					lista.push('E');
					break;
				}
			}
			
			
			if (lista.size() == 0){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
			
		}
		
		
    return 0;	
	}
