#include <stdio.h>
int main() {
int n, a, sq, sum = 0;

scanf("%d",&n);//input number

sq = n*n;//calculate square of n
a = sq;//assign square to a

while(a > 0){
   int  lastDigit = a % 10;//get last digit
    sum += lastDigit;//add last digit to sum
    a = a / 10;//remove last digit
}

printf(n == sum?"neon number\n":"not a neon number");

return 0;
}