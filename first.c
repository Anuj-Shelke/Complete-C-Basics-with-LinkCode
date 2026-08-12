// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10]; 
    int set_1[5]; 
    int set_2[5];
    int count = 5;  
    int flag = 0 ; 
    int i = 0 ;
    int j = 0 ;  
    printf("Enter Elements for Array one \n"); 
    for(i = 0 ; i < 5; i++){
        scanf("%d",&set_1[i]); 
    }
    printf("Enter Elements for Array two \n"); 
    for(j =0 ; j < 5; j++){
        scanf("%d",&set_2[j]); 
    }

    for(i = 0 ; i < 5; i++){
        arr[i] = set_1[i]; 

    }
    for(i = 0 ; i < 5; i++){
        flag = 0 ; 
        for(j = 0 ;  j < 5; j++){
            if(arr[j] == set_2[i]){
                flag = 1; 
                
                break; 
            }
        }

          if(flag == 0){
        arr[count] = set_2[i];
        count++; 
          
            
        }
        
    }
  
    
    printf("The final Array elements are : "); 
    for(int i = 0 ; i< count; i++){
        printf("%d ",arr[i]); 
    }

    return 0;
}