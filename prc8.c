//shop discount
#include <stdio.h>
int main() {
    char gender, user;
    int year, salary;

    printf("enter gender(m/f):\n");
    scanf(" %c", &gender);

    printf("enter user(p/g):\n");
    scanf(" %c", &user);

    printf("enter year:\n");
    scanf("%d", &year);

    if (gender == 'm'){
        if (year >= 10) {
            if (user == 'p') 
                salary = 15000;
            else
                salary = 10000;
          }else{
                if (user == 'p')
                    salary = 10000;
                 else
                    salary = 7000;
              }
            }    
            else if (gender == 'f'){
                    if (year >= 10) {
                        if (user == 'p')        
                            salary = 12000;
                        else
                            salary = 9000;        
                    }else{
                            if (user == 'p')                            
                                salary == 10000;        
                            else
                                salary = 6000;
        }
    }
    printf("salary : %d\n",salary);

    return 0;
  }           