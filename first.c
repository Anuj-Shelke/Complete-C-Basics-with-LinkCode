//Insertion sort .

#include <stdio.h>

int main() {
    int arr[]= {5,4,6,7,2,1}; 
    int size =sizeof(arr)/sizeof(arr[0]); 
    for(int i = 1 ; i < size ; i++){
        int j = i-1; 
        int key = arr[i]; 
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j+1] = key; 
    }
    for (int i = 0  ; i < size  ; i++){
        printf("%d ",arr[i]); 
    }
  
}