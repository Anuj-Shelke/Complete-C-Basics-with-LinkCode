// While loop Link_code C language
//Code to orint factors of a given number ; 
#include<stdio.h> 
int main(){
    int i = 1 ; 
    int n = 0 ; 
    printf("Enter the value of n "); 
    scanf("%d",&n); 
    while(i<=n){
        if(n%i == 0 ){
            printf("The factor of the number is %d is %d \n",n ,i); 
            
        }
        i++; 
    }
}