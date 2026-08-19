// Code to print addition of two numbers using pointers 
#include<stdio.h>

int main() {
    int num = 5;
    int num1 = 5; 
    int *p1 = &num;
    int *p2 = &num1 ;
    int sum =  *p1+*p2;

    // printf("%d \n",num); 
    // printf("%d \n",*p1);
    // printf("%d \n",*p2);
    printf("%u \n",sum);



    return 0;
}