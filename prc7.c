//student grade calculation
#include <stdio.h>
int main() {
    int percent, s1, s2, s3, s4;

   // printf("enter subject marks :");
    scanf("%d %d %d %d", &s1 , &s2 , &s3 , &s4);
    
    int total = s1 + s2 + s3 + s4;
    percent = total / 4;
    
    printf("grade =");
    
    if(percent < 35) {
        printf("F\n");
    }
    else if(percent < 45) {
        printf("E\n");
    }
    else if(percent < 60) {
        printf("D\n");
    }
    else if(percent < 75) {
        printf("C\n");
    }
    else if(percent < 90) {
        printf("B\n");
    }
    else {
        printf("A\n");
    }
    return 0;
}