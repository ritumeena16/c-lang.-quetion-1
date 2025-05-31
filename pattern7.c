//TRIANGLE
#include <stdio.h>
int main() {
    int n = 5;

    for(int i = 1; i <= n; i++){     // rows=5 - 12345
    //space   
        for(int j = 1; j <= n-i; j++){  // 43210
            printf(" ");
        }
    //star
    for(int j = 1; j <= i; j++){
    printf("* ");
    }
      printf("\n");

   }
   return 0;
}
/*i=1 ,2,3,4,5 i=n loop=stop
j=n-i,n=5 & i=1,j=5-1=4=space
n=5 & i=2,j=5-2=3=space
n=5 & i=3,j=5-3=2=space 
n=5 & i=4,j=5-4=1=space
n=5 & i=5,j=5-5=0=space
j<=i;j=1 & i=1,j=2&i=2 _ _ _|
*/