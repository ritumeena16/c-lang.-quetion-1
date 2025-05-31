#include <stdio.h>
int main() {
    int a=8, b=9,t;
    t = a;
    a = b;
    b = t;
     printf("after swaping a = %d and b = %d",a,b);

     return 0;
}