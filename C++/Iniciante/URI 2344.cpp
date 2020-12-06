#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin >> N;
    if (N == 0){
    cout << "E" << endl;
	} else if(N >= 1 &&  35 >= N){
	cout << "D" << endl;
	}else if(N >= 36 &&  60 >= N){
	cout << "C" << endl;
	}else if(N >= 61 &&  85 >=N){	
	cout << "B" << endl;
	}else if(N >= 86 &&  100 >= N){	
	cout << "A" << endl;

    
}
    return 0;
}
