// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int ch = 0 ;
    int sum=0 ; 
    printf("Enter 1 for starter \n");
    printf("Enter 2 for veg menu \n"); 
    printf("Enter 3 for non veg menu \n");
    scanf("%d",&ch); 
    if(ch==1 ){
        menu: 
        printf("=============Menu==============\n");
        int dish; 
        printf("1.Dish1  200\n"); 
        printf("2.Dish2  250\n"); 
        printf("3.Dish3  350\n"); 
        printf("Enter 4 to return back to starter \n"); 
        printf("Enter 5 for exit"); 
        printf("Choose Your dish and enter the dish number\n");
    
        scanf("%d",&dish); 
        if(dish == 1){
            sum =sum+200;
            goto menu; 
        }
        else if(dish == 2 ){
            sum = sum+250; 
            goto menu; 
        }
        else if(dish == 3){
            sum = sum+350; 
            
        }
        else if(dish== 4){
            goto menu ; 
        }
        
        else{
            printf("Enter a valid order number \n"); 
        }
        
    }
    else if(ch == 2){
        printf("Entering veg section.........\n"); 
        
        
    }
    else if(ch == 3){
        printf("Entering non veg section\n"); 
    }
    else{
        printf("Enter a valid option \n"); 
    }
    int total = sum; 
    float CGST = 0.18*sum ; 
    float SGST = 0.18*sum ; 
    float final_total = sum+CGST+SGST;
    printf("SGST %f\n",SGST); 
    printf("CGST %f\n",CGST); 
    printf("Your Grand Total :  %f\n",final_total); 
    
    
    
    

    return 0;
}