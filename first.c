// Code to check if a number is a pallindrome; 
#include<stdio.h>
int main(){
    int n, temp,save ; 
    temp = 0 ; 
    printf("Enter number to be reversed \n"); 
    scanf("%d",&n); 
    save = n ; 
    while(n != 0){
        temp = temp*10+(n%10); 
        n=n/10; 
    }
    printf("The number reversed is %d \n ",temp); 
    if(temp == save){
        printf("The given number is a pallindrome \n"); 
    }
    else{
        printf("The number is not a pallindrome\n");
    }
}