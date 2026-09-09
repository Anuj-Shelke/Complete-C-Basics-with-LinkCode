// Code for Bubble Sort ; 

#include <stdio.h>

int main() {
  int arr[6] = {6,5,4,3,2,1}; 
  int size = sizeof(arr)/sizeof(arr[0]); 
  for(int i = 0 ; i < size-1; i++ ){
      for(int j =0 ; j < size-i-1; j++){
          if(arr[j+1]<arr[j]){
              int temp = arr[j]; 
              arr[j] = arr[j+1]; 
              arr[j+1] = temp; 
          }
        
      }
     
      
  }
     printf("The sorted array is : "); 
      for(int i = 0 ; i < size; i++){
          printf("%d ",arr[i]); 
      }
}
    