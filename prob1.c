#include <stdio.h>
int main() {
    int n=5,fact=1,sum=0;
    for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        fact*=j;
    } 
if(i!=n)
    printf("%d! +",i);
else
printf("%d!",i);
sum+=fact;
fact=1;
}

printf(" = %d\n",sum);
return 0;
}