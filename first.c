
#include <stdio.h>

int main() {
   int arr[5] = {1,2,3,4,5}; 
    int element = 10; 
    int low = 0 ; 
    int found = 0 ; 
    int high = sizeof(arr)/sizeof(arr[0]-1); 
    while(high>= low){
        int mid = (low+high)/2; 
        if(arr[mid] == element){
            printf("The element %d is found at index %d",arr[mid],mid);
            found = 1; 
            break; 
        }
        else if(arr[mid]<element){
             low = mid+1;
        }
        else{
            high = mid-1; 
        }
        
    }
    if(found== 0){
        printf("The element not found in the array "); 
    }
    
    return 0;
}
    