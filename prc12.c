//factorial of n
#include <stdio.h>
int main() {
    int n = 4, fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }


    printf("%d\n",fact);
    return 0;
}