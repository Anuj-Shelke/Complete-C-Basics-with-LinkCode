// Code to print Value and Address of Array elements 
#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5}; 
    for(int i= 0 ; i < 5 ; i++){
        printf("%d ",arr[i]); 
        printf("\n"); 
    }
    printf("\n-----------------------------------------\n"); 
    int *ptr = &arr[0]; 
   

    for(int i = 0 ; i < 5; i++){
        printf("%d -> %u\n",(*ptr+i),(ptr+i)); 
    }
    

    return 0;
}