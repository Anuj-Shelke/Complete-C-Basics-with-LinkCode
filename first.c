//ATM Management System 
#include<stdio.h>
int main(){
 

int in; 

int amount ; 
int balance =1000; 
int pin ; 
menu:
printf("Enter 1 to Credit Cast  \n");
printf("Enter 2 for Cash withdrawl \n");
printf("Enter 3 for Balance check\n");
printf("Enter 4 for exit \n");
int choice;
scanf("%d",&choice); 
switch(choice){
    case 1 :{
       
        balance = 1000; 
        int receipt = 0 ; 
        printf("Enter Your password\n");
        scanf("%d",&pin);
        if(pin == 1234){
            printf("Enter The amount to be credited\n");
            scanf("%d",&amount); 
            balance = balance+amount; 
            
        printf("Enter 1 if you want receipt\n"); 
        scanf("%d",&receipt); 
        if(receipt == 1){
            printf("Your updated Balance to : %d\n",balance); 
            goto menu;
        }
        break; 
        }
        else{
            printf("Invalid pin \n Try Again After Some time...............\n"); 
            break; 
        }
        
    }

    case 2: {
        int in ; 
        int withdraw; 
        printf("Enter amount to  Withdraw\n"); 
        scanf("%d",&withdraw);
        printf("Enter Your pin "); 
        
        if(withdraw > balance ){
            printf("Insufficient Balance \n"); 
            printf("Enter 1 for balance enquiry else \n Enter 2 to get back main menu \n"); 
            scanf("%d",&in); 
            switch(in){
                case 1:{
                    goto check;
                    break;  
                }
                case 2:{
                    goto menu;  
                    break; 
                }

        }
        


    }
    else{
        printf("Enter your pin "); 
        scanf("%d",&pin); 
        if(pin ==1234){
        balance = balance - withdraw; 
        goto menu; 
        break; 
        }
    }
    break;

}

case 3 : {
    check: 

    printf("Enter Your pin\n"); 
    scanf("%d",&pin); 
    if(pin == 1234){
        printf("Your balance is %d\n",balance); 
        goto menu; 
        
    }
    else{
        printf("Invalid pin /n Try Again After some time\n"); 
        goto check; 
    }
    break; 



}
case 4:{
    printf(".....................Thanks for Visiting.....................\n"); 
    break; 
}



}
}