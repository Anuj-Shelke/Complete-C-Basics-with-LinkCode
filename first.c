// Code to print multiplication table of a given number using For Loop 
#include <stdio.h>

int main() {
    int n = 0 ; 
    printf("Enter number to print multiplication table of :"); 
    scanf("%d",&n); 
    for(int i = 1  ; i<= 10 ; i++){
        printf("%d X %d = %d\n",i,n,i*n); 
        
    }
    printf("Thank You"); 
}