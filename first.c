#include<stdio.h>
int main(){
    printf("Numbers from 1 to 10 using for loop \n");
    int n = 10 ; 
    for(int i = 1 ; i < n ; i++){
        printf("%d\n",i);
        
    }
    printf("Now printing from 10 to  1 \n");
    //Print number from 1 to 10 
    for(int i = 10 ; i >=1; i--){
        printf("%d\n",i); 
    }
    printf("ASCII Values \n"); 
    for(int i = 65 ; i < 90 ; i++){
        printf("%d : %c\n",i,i); 
    }
    
}