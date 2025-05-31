//check if a number is palindrome
#include <stdio.h>
int main() {
int n = 121;
int copy = n;
int rev = 0;
while(n > 0){
    //last digit
    int last = n%10;
   //reverse
    rev = rev*10 + last;
   //remove last digit
    n /= 10;
}
//check digit palindrome or not palindrome
printf(rev == copy ? "palindrome\n" : "not palindrome\n");
return 0;    
}