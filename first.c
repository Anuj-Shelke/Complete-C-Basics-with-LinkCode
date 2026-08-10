// Code to take find second Greatest element in an array 

#include <stdio.h>

int main() {
    int max = 0 ; 
    int min = 0 ; 
    int avg = 0 ; 
    int sum = 0 ; 
    printf("Enter any 5  numbers to check if they are even or odd :\n");
    int arr[5]; 
    for(int i = 0 ;i< 5; i++){
         scanf("%d",&arr[i]); 
         
    }
    min = arr[0];
    max = arr[0]; 
    for(int i = 0 ; i < 5 ; i++){
         
      if (  arr[i]> max ){
         max = arr[i];
      }
      
      
     
       
    }
    int max_2 = 0 ; 
    for(int i = 0 ; i< 5 ; i++){
      if(arr[i]>max_2 && arr[i]<max){
         max_2= arr[i]; 
    }

   }
   

     printf("the second greatest elemnent in an Array is  %d\n",max_2); 
     
     
    
   
    return 0;
}