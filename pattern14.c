//INVERT RIGHT TRIANGLE STAR PATTERN
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = n; i >= 1; i--){ //54321 = i
        for(int j = 1; j <= i; j++){   //12345 loop 1-i(j-i)
            printf("* "); //print star
        }
        printf("\n"); //next line
    }
    return 0;
}