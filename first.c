/*
Code to print Alphabetical pyramid  with space
*/

#include <stdio.h>

int main() {
    int row = 1; 
    int coln = 1; 
    int sp = 1; 
    int i =  65; 
    
    for(row = 0 ; row < 5 ; row++){
        for(sp = 5 ; sp > row; sp--){
            printf("  ");
        }
        for(coln = 0; coln <= row*2; coln++){
            printf(" %c",i); 
            
        }
        i++; 
        printf("\n"); 
    }
    
    // for(row = 1  ; row < 5; row++){
    //     for(sp = 0  ; sp <=row ; sp++){
    //         printf("  ");
    //     }
    //     for(coln = 9 ; coln >row*2; coln--){
    //         printf(" *"); 
    //     }
    //     printf("\n"); 
    // }
    return 0;
}