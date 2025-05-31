// v star pattern
#include <stdio.h>
int main() {
int n = 5;

for(int i = 1; i <= n; i++){
    for(int j =1; j < 2*n; j++){
        if(i == j || i + j == 2*n){
            printf("* "); //star
        }else{
            printf(" "); //space
        }
    }
    printf("\n");
}
return 0;
}
/* n=5 to 2n=10=i+j
2n-1=9
j <= 2n-1
j = 9,8,7,6,5,4,3,2,1
i = 1,2,3,4,5
*/

//i==j? 