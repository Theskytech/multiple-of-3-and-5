#include <stdio.h>
void main() {   
    int number;
   
    printf("Enter an integer: "); 
    scanf("%d",&number);
    
    if(number%3==0 && number%5!=0)
        {
            printf(" %d is a Good number ",number);
    
        }
 	   else if(number%3==0 && number%5!=0 )
         {
            printf(" %d is a Bad number ",number);
        }
        
        else if(number%5==0 && number%3!=0);
         {
            printf(" %d is a Poor number ",number);
         }
         else 
         {
             printf("-1");
         }
}