// Code to print R using star Pattern
#include <stdio.h>

int main() {
    int row = 0; 
    int coln = 0; 
    
    for(row = 1; row <= 10 ; row++){
        for(coln = 1; coln <= 10; coln++){
            if(coln == 1 || row == 1 || row == 6   || (row == 7 && coln == 2)|| (row == 8 && coln == 4 ) ||(row == 10 && coln == 6 )|| (row == 9 && coln == 6)||(coln == 10 && row <=5)){
                printf("*"); 
            }
            else{
                printf(" "); 
            }
            
        }
        printf("\n"); 
    }

    return 0;
}