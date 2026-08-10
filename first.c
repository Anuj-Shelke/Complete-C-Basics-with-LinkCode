// Code to take ten numbers from user and check if they are even or odd 
#include <stdio.h>

int main() {
    int max = 0 ; 
    int min = 0 ; 
    int avg = 0 ; 
    int sum = 0 ; 
    printf("Enter any 10 numbers to check if they are even or odd :\n");
    int arr[5]; 
    for(int i = 0 ;i< 5; i++){
         scanf("%d",&arr[i]); 
         
    }
    min = arr[0];
    max = arr[0]; 
    for(int i = 0 ; i < 5 ; i++){
          sum = sum+ arr[i];
      if (  arr[i]> max ){
         max = arr[i];
      }
      if(arr[i]<min ){
         min = arr[i]; 
      }
     
       
    }
    printf("The sum of the array element is %d\n",sum);
    printf("The avg of the array element is %d\n",sum/5); 
     printf("the max of the array element is %d\n",max); 
     
     printf("The min of the array element is %d\n",min); 
    
   
    return 0;
}