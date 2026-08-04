
#include <stdio.h>
/*code to print this pattern{
     *
    ***
  *****
  *******
 *********
  *******
   *****
    ***
     *
    
}
     */
  
int main() {
    int row = 0; 
    int space = 0; 
    int coln = 0 ; 
    
    for(row = 0 ; row < 4 ; row++){
        for(space=4  ; space >= row ; space--){
            printf(" "); 
          
        }
        
        
        for(coln = 0; coln <= 2*row ; coln++){
            printf("*");
        }
        
        space = 0; 
        // if(space){
            // printf("\n"); 
        // }
        
        
        // for(coln = 10; coln <= 2*row; coln--){
        //     printf("$");
        // }
        printf("\n");
        
        
    }
    // printf("**********");
    
    for(row = 0 ; row < 5 ; row++){
    
   
  for(space=0 ; space <= row ; space++){
            printf(" "); 
        }
       for(coln = 8; coln >= row*2; coln--){
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}