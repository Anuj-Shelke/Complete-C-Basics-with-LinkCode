/*
Code to print this pattern with space
                           Z
                         Y Y Y
                       X X X X X
                     W W W W W W W
                   V V V V V V V V V
                 U U U U U U U U U U U
               T T T T T T T T T T T T T
             S S S S S S S S S S S S S S S
           R R R R R R R R R R R R R R R R R
         Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
       P P P P P P P P P P P P P P P P P P P P P
     O O O O O O O O O O O O O O O O O O O O O O O
   N N N N N N N N N N N N N N N N N N N N N N N N N
   M M M M M M M M M M M M M M M M M M M M M M M M M
     L L L L L L L L L L L L L L L L L L L L L L L
       K K K K K K K K K K K K K K K K K K K K K
         J J J J J J J J J J J J J J J J J J J
           I I I I I I I I I I I I I I I I I
             H H H H H H H H H H H H H H H
               G G G G G G G G G G G G G
                 F F F F F F F F F F F
                   E E E E E E E E E
                     D D D D D D D
                       C C C C C
                         B B B
                           A
                            
   
  */

#include <stdio.h>

int main() {
    int row = 1; 
    int coln = 1; 
    int sp = 1; 
    int i =  90; 
    
    for(row = 0 ; row < 13 ; row++){
        for(sp = 13 ; sp > row; sp--){
            printf("  ");
        }
        for(coln = 0; coln <= row*2; coln++){
            printf(" %c",i); 
            
        }
        i--; 
        printf("\n"); 
    }
    
    for(row = 1 ; row <= 26; row++){
        for(sp = 1  ; sp <=row ; sp++){
            printf("  ");
        }
        
        for(coln = 27; coln >row*2; coln--){
            printf(" %c",i); 
        }
        i--; 
        printf("\n"); 
    }
    return 0;
}