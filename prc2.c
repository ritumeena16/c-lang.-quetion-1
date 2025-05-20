#include <stdio.h>
int main() {
    char name[30];
    int age;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("hello %s,you are eligible to vote\n",name);
    }
    return 0;
}