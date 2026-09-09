// Selection Sort Code 
#include <stdio.h>

int main() {
    int temp = 0 ; 
    int min = 0 ; 
    int arr[6] = {5,6,4,3,2,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    for(int i= 0 ; i < n-1 ; i++){
        min = i ; 
        for(int j = i+1 ; j < n ; j++){
            if(arr[min] > arr[j]){
                temp = arr[j]; 
                arr[j] = arr[min]; 
                arr[min] = temp; 
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]); 
    }

}