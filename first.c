// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temp = 0 ; 
    int arr[5]={6,5,4,3,2}; 
    for(int i = 0 ; i < 5-1 ; i++){
        for(int j = i+1; j < 5 ; j++){
            if(arr[j] < arr[i]){
                temp = arr[j]; 
                arr[j] = arr[i]; 
                arr[i] = temp; 

            }
        }
    }
    for(int i =0 ; i < 5; i++){
        printf("%d ",arr[i]); 
    }

    return 0;
}