//leap year
#include <stdio.h>
int main() {
  int year;
  
  printf("enter year :");
  scanf("%d", &year);
  
  if((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0)){
    printf("leap year\n");
  }
  
  else{
    printf("not a leap year\n");
  }
  
  return 0;
}