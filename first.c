// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1 ;
    int n2 ; 
    int add ;
    int choice = 1;
    int ct = 1; 
    int sub ; 
    int mul ; 
    int div ; 
    
    
    
   
   do{
        printf("Enter number 1 \n"); 
        scanf("%d",&n1);
        printf("Enter number 1 \n"); 
        scanf("%d",&n2);
    
       printf("Enter 1 for addtion \n"); 
       printf("Enter 2 for substraction \n"); 
       printf("Enter 3 for multiplication \n"); 
       printf("Enter 4 for division \n"); 
       scanf("%d",&choice);
       switch(choice){
           case 1: {
               add = n1+n2; 
               printf("Addition of the number %d and %d is %d \n",n1,n2,add);
               break; 
           }
          case 2 :{
              sub = n1-n2; 
              printf("substraction  of the number %d and %d is %d \n",n1,n2,sub); 
              break ; 
          }
          case 3 :{
             mul = n1*n2; 
              printf("multiplication  of the number %d and %d is %d \n",n1,n2,mul); 
              break; 
          }
         case 4:{
             
             div = n1/n2; 
              printf("division of the number %d and %d is %d \n",n1,n2,div); 
              break; 
         }
       }
       printf("Enter 1 if you want to continue the program\n"); 
       scanf("%d",&ct); 
   }while(ct == 1); 

    return 0;
}