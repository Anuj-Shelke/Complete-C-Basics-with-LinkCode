// While loop Link_code C language
//Code to orint factorial of a given number  ; 
#include<stdio.h> 
int main(){
    int fact = 1 ; 
    int i = 1; 
    int n = 0 ; 
    printf("Enter the value of n "); 
    scanf("%d",&n); 
    while(i<=n){
        fact = fact*i ;
        i++; 
    }
    printf("The factorial of a number %d is %d \n",n , fact); 
}