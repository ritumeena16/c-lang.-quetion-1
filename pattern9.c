// X star pattern
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
/*i=j;1=1,2=2,3=3,4=4,5=5
i+j==n+1; 
(1,5),(2,4),(3,3,(4,2),(5,1)
i+j==n+1
1+5==5+1,6=6;2+4==5+1,6=6;3+3==5+1,6=6;4+2==5+1,6=6;5+1==5+1,6=6

*/