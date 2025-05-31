#include <stdio.h>
int main() {
    int n = 5;

   //first part increasing triangle
   for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= i; j++){
        printf("%d ",(i+j)%2);
    }
    printf("\n");
   }
   //second part decreasing triangle
   for(int i = 2; i >= 1; i--){  //gpt
    for(int j = 1; j <= i; j++){  //gpt
        printf("%d ",(i+j)%2);
    }
    printf("\n");
   }

   return 0;
    
}