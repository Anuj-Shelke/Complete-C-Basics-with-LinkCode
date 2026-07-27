// While loop Link_code C language
// Code to Check if a number is a prime number  ;
#include<stdio.h>
int main(){
    int count = 0 ; 
    int i = 1 ; 
    int n = 0 ; 
    printf("Enter number to check if a number is prime or not : ");
    scanf("%d",&n); 
    while(i <=  n ){
        
     if(n%i  == 0 ){
         count++; 
     }
     i++; 
     
     
    }
    if(count ==2 ){
        printf("The number is a prime number "); 
    }
    return 0; 
}