// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1 ;
    int n2 ; 
    int area_circle ; 
    int area_square; 
    int area_triangle ;
    int choice = 1;
    int ct = 1; 
    int height ; 
    int base  ; 
    int r  ; 
    int side ; 
    
    
    
   
   do{
        
       
    
       printf("Enter 1 for area of circle \n"); 
       printf("Enter 2 for area of triangle  \n"); 
       printf("Enter 3 for square \n"); 
       
       scanf("%d",&choice);
       switch(choice){
           case 1: {
               printf("Enter Radius \n"); 
               scanf("%d",&r);
               area_circle = 3.14*r*r; 
               printf("Area of circle is  %d \n",area_circle);
               break; 
           }
          case 2 :{
              
              printf("Enter base \n"); 
              scanf("%d",&base); 
              printf("Enter height \n"); 
              scanf("%d",&height); 
              area_triangle = 0.5*base*height; 
              printf("Area of Triangle %d\n",area_triangle);
              break; 
          }
          case 3 :{
              printf("Enter side of square  \n"); 
              scanf("%d",&side); 
             area_square= side*side; 
              printf("Area of square is %d \n",area_square); 
              break; 
          }
        
       }
       printf("Enter 1 if you want to continue the program\n"); 
       scanf("%d",&ct); 
   }while(ct == 1);
   printf("--------------Thank----------------- \n"); 

    return 0;
}