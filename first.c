#include<stdio.h>
int main(){
    printf("----------------------Factors-Code------------------\n"); 
    int count =0 ; 
    //Factor of a number using for loop 
    int n = 1 ; 
    int temp = 1 ; 
    printf("Enter the value of n \n"); 
    scanf("%d",&n); 
    for(int i = 1  ; i <= n/2 ; i++){
        if(n%i== 0){
            printf("The factor of number is %d\n",i);  
        }
       
        
    }
    
    printf("---------------------------Factorial-----------------\n");
    int fact = 1; 
    int numm = 0 ; 
    printf("Enter the value of n \n"); 
    scanf("%d",&numm);
    for(int i = 1 ; i<=  numm ; i++){
        fact = fact * i; 
    }
    
    printf("The factorial of the number is %d\n",fact);
    
    printf("------------------------------Prime Number-----------------\n"); 
    int num = 0 ; 
    int co = 0 ; 
    printf("Enter the value to check if it is a prime number \n");
    scanf("%d",&num); 
    for(int i = 2   ; i < num/2 ;  i++){
        if(num%i == 0 ){
          co = 1;  
        }
        
    }
    if(co ==  0 ){
        printf("The number is  prime number \n"); 
    }
    else{
        printf("The number is not a prime number \n"); 
    }
    
}