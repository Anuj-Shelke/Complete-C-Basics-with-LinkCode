//Code to Print this pattern
// 12345
// 1234
// 123
// 12
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>

int main() {
    int i = 1 ;
for(int row = 5 ; row >= 0; row--){
    i = 1;
    for( int coln = 1; coln <= row; coln++){
        printf("%d",i);
        i++; 
    }
    if(row == 1){
        continue;
        
    }
    else{
        printf("\n"); 
    }
    
}
for(int row = 2 ; row <= 5; row++){
    i = 1;
    for( int coln = 1; coln <= row; coln++){
        printf("%d",i);
        i++; 
    }
    printf("\n"); 
    
}


for(int row = 0 ; row <= 5 ; row++){
    i = 1;
    for( int coln = 1; coln <= row; coln++){
        printf("%d",i);
        i++; 
    }
    // if(row == 1){
    //     continue;
        
    // }
    // else{
        printf("\n"); 
    // }
    
}
for(int row = 4 ; row >= 0; row--){
    i = 1;
    for( int coln = 1; coln <= row; coln++){
        printf("%d",i);
        i++; 
    }
    printf("\n"); 
    
}




    return 0;
}