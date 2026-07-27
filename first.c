// While loop Link_code C language
// Code to print Table of any entered number ;

#include <stdio.h>

int main()
{   int n = 0 ; 

    int i = 1  ;
    printf("Enter number to print the table of the given number"); 
    scanf("%d",&n); 
    while (i <= 10  )
   
    {
        printf("%d X %d == %d \n ",i,n,i*n); 
        i++ ; 
    }
    
}