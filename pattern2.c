//RIGHT TRIANGLE STAR PATTERN
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++){ //outer loop-rows
        for(int j = 1; j <= i; j++){ //inner loop (i=j)-columns
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}