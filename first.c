// Code to Print Alphabets in pattern 
#include <stdio.h>

int main() {
    int ch = 65;
for(int row = 1 ; row <=5 ; row++){
    for(char coln = 1; coln <= row; coln++){
        printf("%c",ch);
    }
    printf("\n"); 
    ch++; 
}
ch = ch-2; 
for(int row = 4 ; row >= 0 ; row--){
    for(char coln = 1; coln <= row; coln++){
        printf("%c",ch);
    }
    printf("\n"); 
    ch++; 
}



    return 0;
}