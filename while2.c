//reverse a number
#include <stdio.h>
int main() {
 int n = 12345;
 int rev = 0;
 while(n!=0) {
   //last digit 
    int last = n%10;
   //reverse 
    rev = rev*10+last;
   //remove last digit
    n/=10;
 } 
 //print reverse
 printf("reverse = %d\n", rev);
 return 0; 
}