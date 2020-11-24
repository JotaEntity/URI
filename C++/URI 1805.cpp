#include <iostream>
 
using namespace std;
 
int main() {
 
    long long int A, B, Final;
    scanf("%lli %lli", &A, &B);
    
    Final = ((A + B) * (B - A + 1)) / 2;
    printf("%lli\n", Final);
 
    return 0;
}
