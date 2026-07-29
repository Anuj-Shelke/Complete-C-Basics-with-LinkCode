// Code to Enter Base and power and enter their result 
#include <stdio.h>
int main(){
    int base,power ;
    int temp = 1; 
    int count = 0 ; 
    printf("Enter power "); 
    scanf("%d",&power); 
    printf("Enter base "); 
    scanf("%d",&base); 
    while(count != power){
        temp = base* temp; 
        count++; 
    }
    printf("The result of the calculation is %d\n",temp); 
    
}