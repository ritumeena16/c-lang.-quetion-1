#include <stdio.h>
int main() {
    int n, sum = 0;
    int copy=n;

    scanf("%d",&n);

    //a = n;
    while(n > 0){
        int lastDigit = n % 10;//get last digit
        sum += lastDigit;//add last digit to sum
        n /= 10;//remove last digit
    }

        printf(copy % sum == 0 ? "harshad number\n":"not a harshad number\n");

    //printf(a % sum == 0 ? "harshad number\n":"not a harshad number\n");

    return 0;
}