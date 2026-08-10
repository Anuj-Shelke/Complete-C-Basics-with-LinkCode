// Code to take ten numbers from user and check if they are even or odd 
#include <stdio.h>

int main() {
    int num=0; 
    int only_3; 
    int count = 0 ; 
    int only_5 = 0 ; 
    printf("Enter any 10 numbers to check if they are even or odd :\n");
    int arr[10]; 
    for(int i = 0 ;i< 10; i++){
         scanf("%d",&arr[i]); 
    }
    for(int i = 0 ; i < 10 ; i++){
        if((arr[i]%3==0)&&(arr[i]%5==0)){
            count++; 
        }
        else if(arr[i]%3==0){
            only_3++; 
        }
        else if(arr[i]%5==0){

            only_5++; 
        }
        else{
            num++; 
        }
    }

     printf("there are total %d  numbers in array divisible by 3 and 5 \n",count); 
     printf("There are total %d numbers in array divisible by 3 only\n",only_3); 
     printf("There are total %d numbers in array divisible by 5 only\n",only_5); 
     printf("There are total %d numbers in array divisible by  non of them \n",num); 
     
     
     
   
    return 0;
}