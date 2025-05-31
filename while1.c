//separate digits and calculate their sum
#include <stdio.h>
int main() {
int n=123456;
int sum = 0;

while(n!=0){
    int last = n%10;//last digit 
   printf("%d ",last);//print last digit
   sum += last;//sum of last digits
   n/=10;//remove last digit
}
printf("\n");//for next line
printf("sum = %d\n",sum);//print sum of last digits
 return 0;   
}