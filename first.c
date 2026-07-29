// Code to reverse a number ; 
#include<stdio.h>
int main(){
    int n, temp; 
    temp = 0 ; 
    printf("Enter number to be reversed "); 
    scanf("%d",&n); 
    while(n != 0){
        temp = temp*10+(n%10); 
        n=n/10; 
    }
    printf("The number reversed is %d",temp); 
}