//Right-Aligned Rectangle
#include <stdio.h>
int main() {
    int n = 5;
    for(int i = n; i >= 1; i--){ //rows = 54321
     //space   
        for(int j = 1; j <= n - i; j++){ //columns = 5,4,3,2,1 =stop
            printf(" ");
    }
    for(int j = 5; j >= 1; j--){
        printf("*");
    }
printf("\n");
}
return 0;
}