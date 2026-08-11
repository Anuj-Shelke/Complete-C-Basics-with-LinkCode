// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10] ; 
    int even[10]; 
    int odd[10]; 
    int e_count =0 ; 

    printf("Enter array elements "); 
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d",&arr[i]);

    }
    for(int i = 0; i < 10; i++){
        if(arr[i] % 2== 0 ){
            even[i] = arr[i] ; 
            e_count++; 
        }
        else{
            odd[i] = arr[i]; 

            
        }
    }
    printf("There are total %d Even Numbers \n",e_count); 
    printf("The even Array elements are : ");
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i]==0){
            continue; 
        }
        else{
        printf("%d\n",even[i]); 
        }
        
    
    }
    printf("There are total %d Odd Numbers \n",(10-e_count)); 
    printf("The Odd Array elements are : ");
     for(int i = 0 ; i < 10 ; i++){
        if(arr[i]==0){
            continue; 
        }
        else{
        printf("%d\n",odd[i]); 
        }
        
    
    }

    

    return 0;
}