// Program For hotel Order Management System using switch case
#include <stdio.h>
int main()
{
    int CGST= 0 ; 
    int SGST= 0 ; 
    int sum =0 ;
    int total = 0 ; 
    int choice = 0;
    menu: 
    printf("Enter 1 for starters \n");
    printf("Enter 2 for veg menu \n");
    printf("Enter 3 for non-veg menu \n");

    
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        starter:
        printf("Enter Your choice \n");
        printf("1.Dish1   200Rs\n");
        printf("2.Dish2    250Rs\n");
        printf("3.Dish3    300Rs\n");
        printf("Enter 4 to Enter billing section\n");
        printf("Enter 5 to go back to Main menu \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            sum = sum + 200;
            goto starter; 
            break;
        }
        case 2:
        {
            sum = sum + 250;
            goto starter; 
            break;
        }
        case 3:
        {
            sum = sum + 300;
            goto starter; 
            break;
        }
        case 4:{
            printf("Entering bill section \n");
            goto bill;
        }
        case 5:{
            printf("Returning back to main menu \n");
            goto menu; 
        }
        default:
        {
            printf("Enter a valid option\n");
            break; 
        }
        
        }
    }
    case 2:
    {   Veg: 
        printf("Enter your choice\n");
        printf("1.Veg Dish1      200Rs\n");
        printf("2.Veg Dish2    250Rs\n");
        printf("3.Veg Dish3    300Rs\n");
        printf("Enter 4 to Enter billing section\n");
        printf("Enter 5 to go back to Main menu \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            sum = sum + 200;
            goto Veg; 
            break;
        }
        case 2:
        {
            sum = sum + 250;
            goto Veg; 
            break;
        }
        case 3:
        {
            sum = sum + 300;
            goto Veg; 
            break;
        }
        case 4:{
            printf("Entering bill section ");
            goto bill;
        }
        case 5:{
            printf("Returning back to main menu \n");
            goto menu; 
        }
        default:
        {
            printf("Enter a valid option\n");
            break; 
        }
        
        }
    }
    case 3:
    {   NV_:
        printf("Enter your choice\n");
        printf("1.NV_Dish1      200Rs\n");
        printf("2.NV_Dish2    250Rs\n");
        printf("3.NV_Dish3    300Rs\n");
        printf("Enter 4 to Enter billing section\n");
        printf("Enter 5 to go back to Main menu \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            sum = sum + 200;
            goto NV_;
            break;
        }
        case 2:
        {
            sum = sum + 250;
            goto NV_;
            break;
        }
        case 3:
        {
            sum = sum + 300;
            goto NV_;
            break;

        }
        case 4:{
            printf("Entering bill section \n");
            goto bill;
        }
        case 5:{
            printf("Returning back to main menu \n");
            goto menu; 
        }
        default:
        {
            printf("Enter a valid option\n");
            
            break; 
        }

        
        }
    }

        default:{
            printf("Enter a valid input \n"); 
        }
    

    }
    bill:
    printf("----------------------bill------------------------\n");
    CGST =0.18*sum;
    SGST =0.18*sum; 
    total = sum+CGST+SGST;
    printf("Bill  %d\n",sum);
    printf("CGST  %d\n",CGST);
    printf("SGST  %d\n",SGST);
    printf("Total %d\n",total);
    printf(".....................Thanks for Visiting.....................\n");
}