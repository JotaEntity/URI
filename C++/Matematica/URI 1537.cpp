#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   long long matriz[100002];
 
   int n;
   matriz[3] = 1;
   
   for (int i = 4; i <= 100000; i++)
       matriz[i] = (i*matriz[i - 1]) %1000000009;
   
   while (cin >> n){
       
       if (!n)break;
       cout << matriz[n] << endl; 
   }
   
}
