//prime no.
#include <stdio.h>

int main() {

    int n;
    printf("Enter number: ");
    scanf("%i",&n);

    int count = 0;
    for(int i = 1; i<=n; i++){   
        if(n%i==0) {
           count++;
        }
    }
    if(count==2){
        printf("Prime Number");
    }else{
        printf("Not a Prime Number");
    }

return 0;
}