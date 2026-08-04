
#include <stdio.h>
/*code to print this pattern{
     1
    121
   12121
  1212121
 121212121
    
}
     */
  
int main() {
    int row = 0; 
    int space = 0; 
    int coln = 0 ; 
    int i = 1; 
    for(row = 0 ; row < 5 ; row++){
        for(space=4  ; space >= row ; space--){
            printf(" "); 
          
        }
        
        i = 1; 
        for(coln = 0 ; coln <= row*2 ; coln++){
            if(coln% 2 == 0  ){
                i = 1; 
            }
            printf("%d",i);
            i++; 
        }
     
     
        printf("\n");
        
        
    }
    
    return 0;
}