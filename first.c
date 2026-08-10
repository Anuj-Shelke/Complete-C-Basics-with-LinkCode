// Code to print array element using for loop in reverse order and then printing sum of given array element
#include <stdio.h>

int main() {
    int sum = 0 ; 
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  for(int i = 9 ; i >=0 ; i--){
      printf("%d\n",arr[i]); 
      sum = sum + arr[i]; 
  }
  printf("Sum of array elements is %d",sum); 
    return 0;
}