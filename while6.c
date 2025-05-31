#include <stdio.h>

int main() {
 int n = 109;
 int sum = 0;
 while(n > 0 || sum > 9) {
    if(n == 0) {
        n = sum;
        sum = 0;
    }
   
    int lastDigit = n % 10;  //get last digit
    sum += lastDigit;  //store ld in sum
    n /= 10;  //remove ld
} 

 printf(sum == 1 ? "special number" : "not a special number"); 

 return 0;
}
//find single digit number
// if sdn==1 ,sn
//else , not a sn