// Code for selection sort revised 
#include <stdio.h>

int main() {
    int arr[] = {1,5,2,4,3}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    for(int i = 0 ; i < size-1 ; i++){
        int min = i ; 
        for(int j =i+1 ; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }; 
            
        }
        int temp = arr[i]; 
        arr[i] = arr[min]; 
        arr[min] = temp ; 
        
    }

    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]); 
    }
    
}