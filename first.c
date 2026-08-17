// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j; 
    
    int arr[3][3]; 
    int arr1[3][3]; 
    int arr3[3][3]; 
    printf("Enter the matrix elements \n"); 

    
    for(i = 0 ; i <3 ; i++){
        for(j = 0 ; j <3; j++){
            scanf("%d",&arr[i][j]);  
        }
       
    }
    printf("Enter elements of Array 2 \n"); 
    
    for(i = 0 ; i <3 ; i++){
        for(j = 0 ; j <3; j++){
            scanf("%d",&arr1[i][j]);  
        }
       
    }

    printf("The sum of the Array elements is \n");
     for(i = 0 ; i <3 ; i++){
        for(j = 0 ; j <3; j++){
            arr3[i][j] = arr[i][j]+arr1[i][j]; 
        }
         
    }
    
     for(i = 0 ; i <3 ; i++){
        for(j = 0 ; j <3; j++){
            printf("%d ",arr3[i][j]);  
        }
        printf("\n"); 
    }

    return 0;
}