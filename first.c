// Online C compiler to run C program online
#include <stdio.h>
#define max 20 
int main() {
    int r1,r2;
    int c1,c2;  
    printf("Enter number of rows and columns \n");
    scanf("%d%d",&r1,&c1); 

    printf("Enter number of rows and columns \n");
    scanf("%d%d",&r2,&c2); 

    int i,j; 
    
    int arr[max][max]; 
    int arr1[max][max]; 
    int arr3[max][max]; 
  

    if(r1 == r2 && c1==c2){
    printf("Enter number of rows and columns \n");
    scanf("%d%d",&r1,&r2); 
    for(i = 0 ; i <r1 ; i++){
        for(j = 0 ; j <c1; j++){
            scanf("%d",&arr[i][j]);  
        }
       
    }
    printf("Enter elements of Array 2 \n"); 
    
    for(i = 0 ; i <r2 ; i++){
        for(j = 0 ; j <c2; j++){
            scanf("%d",&arr1[i][j]);  
        }
       
    }

    printf("The sum of the Array elements is \n");
     for(i = 0 ; i <r1 ; i++){
        for(j = 0 ; j <c1; j++){
            arr3[i][j] = arr[i][j]+arr1[i][j]; 
        }
         
    }
    
     for(i = 0 ; i <r1 ; i++){
        for(j = 0 ; j <c1; j++){
            printf("%d ",arr3[i][j]);  
        }
        printf("\n"); 
    }

    }
    else{
        printf("Enter valid numbers \n"); 
    }
    return 0;
}