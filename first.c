//Euro to rs 
//Euro to dollar 
//Euro to Euro 
#include <stdio.h>

int main() {
    // printf("Enter 1 for Euro to Converter "); 
    // printf("Enter 2 for Rupee to Converter "); 
    printf("Enter 1 for Euro to Rupees Conversion\n"); 
    printf("Enter 2 for Euro to dollar Conversion\n"); 
    printf("Enter 3 for Euro to Euro  Conversion\n"); 
    printf("Enter 4 for exit \n"); 
    Converter:
    int choice; 
    scanf("%d",&choice); 
    switch(choice){
         
        case 1 : {
            float amount; 
            printf("Enter Amount in Euro \n"); 
            scanf("%f",&amount); 
            float Rupee = amount* 110.2;
            printf("%f Euro = %f Rupee \n",amount, Rupee); 
            printf("Enter Your Choice from the menu Again\n"); 
            
            goto Converter; 
        }
        case 2 :{
            float amount; 
            printf("Enter Amount in Dollar\n"); 
            scanf("%f",&amount); 
            float Dollar = amount*1.1385;
            printf("%f Euro  = %f Dollar  \n",amount, Dollar);
            printf("Enter Your Choice from the menu Again\n"); 
            goto Converter ;
            
            
        }
        case 3:{
            float amount ; 
            printf("Enter your Amount\n"); 
            scanf("%f",&amount);
            printf("%f Euro  = %f Euro \n",amount, amount );
            printf("Enter Your Choice from the menu Again\n"); 
            goto Converter ; 
            
            
        }
        case 4 :{
            printf("Thanks for using the calculator eixiting...........\n"); 
        }
        default{
            printf("Enter a valid option "); 
        }
    }
    
    

    return 0;
}