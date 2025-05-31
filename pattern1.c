#include<stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n;  i++){ //outer loop for rows
        for(int j = 1; j <= n; j++){ //inner loop for columns
            printf("*"); //print star
        }
        printf("\n"); //new line after each row
    }
    return 0;
}