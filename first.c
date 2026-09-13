// Online C compiler to run C program online
#include <stdio.h>
void display(int arr[], int len){
    for(int i =0 ; i < len ; i++){
        printf("%d ",arr[i]); 
    }
}
int maxlen(int arr[],int len){
    int i = 0 ; 
    int max = arr[i]; 
    for( i = 0 ; i < len ; i++){
        if(arr[i] > max){
            max = arr[i]; 
        }
    }
    return max ; 
}
void CountingSort(int arr[], int len){
    int max = maxlen(arr,len); 
    int count[max+1];
    for(int i = 0 ; i <= max ; i++){
        count[i] = 0 ; 
    }
    for(int i = 0 ; i < len ; i++){
        count[arr[i]]++; 
        
    }
    int k = 0 ; 
    for(int i = 0 ; i <= max ; i++){
        while(count[i] > 0 ){
            arr[k] = i; 
            k++; 
            count[i]--; 
        }
    }
    
}

int main() {
    int arr[5]= {5,4,2,3,1}; 
    int len = sizeof(arr)/sizeof(arr[0]); 
    printf("Size of Arr : %d \n",len);
    int max = maxlen(arr,len);
    printf("Max element : %d\n",max); 
    printf("Before Sorting \n"); 
    display(arr,len); 
    printf("\nAfter Sorting \n"); 
    CountingSort(arr, len); 
    display(arr,len);
    
    
    
}