//MIRROR RIGHT TRIANGLE STAR PATTERN
#include <stdio.h>
int main() {
    int n = 5;
 
    for(int i = 1; i <= n; i++){  // no. of rows=5
      //space  
        for(int j = 1; j <= n-i; j++){   //43210
     printf(" ");  
        }
        //star
        for(int j = 1; j <= i; j++){   //12345
            printf("*");
        }
        printf("\n");
    }
    return 0;
}