// Code to take ten numbers from user and check if they are even or odd 
#include <stdio.h>

int main() {
    int count = 0 ; 
    printf("Enter any 10 numbers to check if they are even or odd :\n");
    int arr[10]; 
    for(int i = 0 ;i< 10; i++){
         scanf("%d",&arr[i]); 
    }
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i]%2==0){
            count++; 
        }
       
    }
     printf("there are total %d even numbers in array\n",count); 
     printf("There are total %d odd numbers in array\n",10-count); 
   
    return 0;
}