#include <stdio.h>

int main() {
    int n = 146;
    int copy = n;
    int sum = 0;

    
    while(n != 0){
     int lastDigit = n % 10;
    
    int fact = 1;
    for(int i = 1; i <= lastDigit; i++){
          fact *= i;
     }

        sum += fact;
        n /= 10;
         
    }
        
        printf(sum == copy ? "strong number\n" : "not a strong number\n");
   
        return 0;

}