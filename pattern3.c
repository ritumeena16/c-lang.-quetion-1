#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++){ //outer loop for rows
        for(int j = 1; j <= i; j++){ //inner loop for columns
            printf(" %d",j); 
        }
    printf("\n");
    }
    return 0;
}