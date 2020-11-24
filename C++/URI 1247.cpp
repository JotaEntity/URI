#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;
int main(){
    double D, VF, VG;
    double m = 12;

    while(cin >> D >> VF >> VG){
        double hip = sqrt(D * D + (144));
        double TF = m / VF;
        double TG = hip / VG;
        
        if (TG<=TF){
            cout << "S\n";
        } else {
            cout << "N\n";
        }
    } 
    
    return 0;
}
