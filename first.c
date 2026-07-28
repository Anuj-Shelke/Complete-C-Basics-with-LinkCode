// Code to check if a number is a perfect number 
#include <stdio.h>

int main() {
    int flag = 1; 
    int n ; 
    printf("Enter number to check if a number is a perfect number :"); 
    scanf("%d",&n);
    int sum = 0 ; 
    int i = 1 ; 
    
    while(i<= n/2 ){
        if(n%i == 0){
             printf("%d\n",i );
             sum = sum+ i ;
          
        }
        i++;

    }
   
    if(sum == n){
        printf("The number is a prefect number %d",sum ); 
    }
    
    return 0;
}