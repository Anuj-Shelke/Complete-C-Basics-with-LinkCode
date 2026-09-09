// Code for insertion Sort 
#include <stdio.h>

int main() {
    int j = 0 ; 
    int arr[5] = {1,5,4,3,2}; 
    int key = 0 ; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    for(int i =1 ; i < n ; i++){
        key = arr[i]; 
        j = i-1; 
        while( j > 0 && arr[j]>key){
            arr[j+1] = arr[j]; 
            j--; 
            
        }
        arr[j+1] = key; 
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]); 
    }

    return 0;
}