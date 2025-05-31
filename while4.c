#include <stdio.h>

#include <math.h>

int main() {
int  n = 153;//1+125+27 = 3
int copy = n;
int countOfDigits = 0;

while(n>0){
  countOfDigits++;
  n /= 10;  
}

n = copy;
int sum = 0;

while(n>0){
    int lastDigit = n % 10;
    //calculate power of a number - number - lastDigit , power - countOfDigit
    int pow = 1;
    for(int i=1; i<=countOfDigits; i++){
      pow *= lastDigit;
    }
    sum += pow;
    n /= 10;
}
printf("%d %d\n", sum, copy);
printf(sum == copy ? "armstrong\n" : "not armstrong\n");

return 0;

}



//recheck
