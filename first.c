// Code to find result of power and base 
#include <stdio.h>

int main() {
    int base,power,result; 
    result = 1; 
    int i = 1 ; 
    printf("Enter base "); 
    scanf("%d",&base); 
    printf("Enter power "); 
    scanf("%d",&power); 
    while(i<= power){
        result = (base* result); 
        i++; 
    }
    printf("The result is %d\n",result); 
    
    
    return 0;
}