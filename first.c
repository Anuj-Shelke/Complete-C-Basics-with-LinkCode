// Online C compiler to run C program online
#include <stdio.h>

int main() {
     int arr[5]={1,2,3,4,5};
     int n = 5; 

     int j = 0 ; 
     int i = 0 ; 
     int k = 0 ; 
     for(i =0 ; i < 5 ; i++){
        int temp = arr[n-1];
        for(j =n-1 ; j > 0 ;j--){
            arr[j] = arr[j-1]; 
        }
        arr[j] = temp; 
        for(k= 0 ; k< 5; k++ ){
            printf(" %d",arr[k]); 
        }
        printf("\n"); 
     }

    return 0;
}