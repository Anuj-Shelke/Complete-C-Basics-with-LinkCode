//Code to print fabonaci series with using loop ; 
#include<stdio.h> 
int main(){
    int n = 10; 
    int count =0 ;
    int first= 0  ; 
    int second = 1 ; 
    int next ; 
    while(count<10){
        printf("%d ",first); 
        next = first +second; 
        first = second ; 
        second = next ; 
        count++; 
    }
    return 0; 
    
}