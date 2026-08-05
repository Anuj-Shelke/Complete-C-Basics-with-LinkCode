// Code to print sum of digit 
#include <stdio.h>

int main() {
    int n ; 
    printf("Enter the number to add digits of "); 
    scanf("%d",&n); 
 
    int digit = 0; 
    int sum = 0; 
    
    do{
        digit= n%10; 
        sum = digit+sum; 
        n = n/10;  
    }while(n != 0 );
    printf("Sum of digit is %d",sum); 

    return 0;
}