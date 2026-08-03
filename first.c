/*
code to print this pattern
*****
 ****
  ***
   **
    * 
   
  
 
*/
#include <stdio.h>

int main() {
  int rem = 1;
  int row = 1; 
  int coln = 1; 
  for(row = 1; row <= 5 ; row++){
      for(int space = 2; space <= row; space++){
          printf(" "); 
          
      }

      for(coln = 5; coln >= row; coln--){
          printf("*"); 
      }
      printf("\n");
   
      
  }
  
  
    return 0;
}