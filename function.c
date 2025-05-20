#include<stdio.h>
#include<math.h>
int main (){

   int n = 5;  // n = 5 5*4*3*2*1 = 120
   int fact = 1;
  
   int sum = 1;
   for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
        fact*=j;
    }
   if(i!=n){
    printf("%i + ",i);
   }else{
    printf("%i! ",i);
   }
   sum+=fact; 
   fact = 1;
}
    
printf("=%i\n",sum);


    return 0;
}


// if(gender == "Male"){

    //     if(year>=10){
    //         if(user=="postGraduate"){

    //         }else{

    //         }
    //     }else{
    //          if(user=="postGraduate"){

    //         }else{

    //         }
    //     }
    // }else{
    //            if(year>=10){
    //         if(user=="postGraduate"){

    //         }else{
                
    //         }
    //     }else{
    //          if(user=="postGraduate"){

    //         }else{

    //         }
    //     }
    // }
