// Online C compiler to run C program online
#include <stdio.h>
/*
Code to print Empty Arrow
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

int main() {
    int row = 1; 
    int coln = 1; 
    int sp = 1; 
    for(row = 5; row >=1 ; row--){
        for(sp =1; sp<=row ; sp++){
            printf("*"); 
        }
        for(int s = 9; s>=row*2 ; s--){
            printf(" "); 
        }
        for(coln = 1 ; coln <=row; coln++){
            printf("*"); 
        }
        
        printf("\n"); 
        
    }
    for(row = 1; row <= 5; row++){
        for(coln = 1 ; coln <=row; coln++){
            printf("*"); 
        }
         
        for(int s = 9; s>=row*2 ; s--){
            printf(" "); 
        }
        for(sp =1; sp<=row ; sp++){
            printf("*"); 
        }
        
        
        
        printf("\n");
    }
    
    
    return 0;
}