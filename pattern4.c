#include <stdio.h>
int main() {
    int n = 5;
    char ch = 'A';// initialize character to 'A'
    for(int i = 1; i <= n; i++){ //outer loop
    ch = 'A'; 
    for(int j = 1; j <= i; j++){ //inner loop
        printf(" %c",ch); //print character
        ch++; //increment character
    }
    printf("\n"); //new line after each row
   }
   return 0;
}
