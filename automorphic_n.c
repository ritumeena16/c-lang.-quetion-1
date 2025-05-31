#include <stdio.h>
#include <math.h>
int main() {
    int n, a, sq, d = 0;
    
    scanf("%d",&n);//input number
    sq = n*n;//calculate square of n
    a = n;//assign n to a
    while(a > 0){
        d++;
        a /= 10;
    }
    
   int p = pow(10,d);
   
printf(sq % p == n ? "automorphic number":"not a automorphic number");

return 0;

}