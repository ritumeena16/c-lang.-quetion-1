//sum and average
#include <stdio.h>
int main() {
    int n = 5, sum = 0;
    float avg;
    
    for(int i = 1; i <= n; i++){
        sum += i;
    }
       
    printf("sum = %d\n",sum);

    avg = (float)sum/n;
    
    printf("avg = %.1f\n",avg);

    return 0;

}