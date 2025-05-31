
#include <stdio.h>
int main() {
    int n=5;
    // first part: upper triangle increasing stars(1 - 3)
    for(int i=1; i<=3; i++){   //outer loop
    for(int j=1; j<=i; j++){   //inner loop
        printf("* ");  // print star
        } 
        printf("\n");
    }
    // second part: lower triangle decreasing stars(2 - 1)
    for(int i=2; i>=1; i--){  
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*    for(int i=2; i>=1; i--){   

        for(int j=1; j<=i; j++){
gpt
*/