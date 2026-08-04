/*
Code to print this pattern with space
*********
  *******
    *****
      ***
        *                          
   
  */

#include <stdio.h>

int main() {
    int row = 1; 
    int coln = 1; 
    int sp = 1; 

    
    for(row = 0 ; row < 5 ; row++){
        for(sp = 0 ; sp < row; sp++){
            printf("  ");
        }
        for(coln = 8; coln >= row*2; coln--){
            printf("*"); 
            
        }
       
        printf("\n"); 
    }
    
    // for(row = 1 ; row <= 26; row++){
    //     for(sp = 1  ; sp <=row ; sp++){
    //         printf("  ");
    //     }
        
    //     for(coln = 27; coln >row*2; coln--){
    //         printf(" %c",i); 
    //     }
    //     i--; 
    //     printf("\n"); 
    // }
    return 0;
}