#include<stdio.h>

int main(){

    int n= 0 ;

    int sum = 0 ; 

    int i = 1; 

    printf("Enter number \n"); 

    scanf("%d",&n); 

    while(i<=n/2){

        if(n%i==0){

            sum = sum+i;

            

        }

        i++; 

        

    }

    printf("the sum of the factors is %d\n",sum);

    if(sum == n){

        printf("The number is a perfect number \n"); 

    }

    else{

        printf("The number is not a perfect number \n"); 

    }

}