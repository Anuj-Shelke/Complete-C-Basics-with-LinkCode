// Online C Linear Search of Element 
#include <stdio.h>

int main() {
    int element = 0; 
    int arr[6] = {1,2,3,4,5,6}; 
    printf("Enter element to search for "); 
    scanf("%d",&element);
    
    for(int i = 0 ; i < sizeof(arr); i++){
        if(element = arr[i]){
    printf("The element %d is found at index %d",arr[i],i);
            return 0; 
        }
        else {
                printf("The element not found "); 
        }
    }

    return 0;
}