//movie status
#include <stdio.h>
int main() {
    float rating;
    char movieName[50];

    printf("movie name :");
    scanf("%s", movieName);

    printf("rating :");
    scanf("%f", &rating);

    if(rating > 0.0 && rating <= 2.0){
     
     printf(" %s is a Flop movie\n",movieName);

    }
    else if(rating > 2.0 && rating <= 3.5){
        
        printf(" %s is a Semi-hit movie\n",movieName);

    }
    else if(rating > 3.5 && rating <= 4.5){
    
        printf(" %s is a Hit movie\n",movieName);

    }
    else{
        
        printf(" %s is a super-hit movie\n",movieName);

    }
return 0;
}