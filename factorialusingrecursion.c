//factorial of a number using recursion
#include <stdio.h>
 long int fact(int num)
 {
     if(num == 0)
     {
         return 1;
     }else{
         return (num*fact(num-1));
     }
 }
 int main()
 {
     int number;
     printf("Enter the number to calculate factorial : ");
     scanf("%d",&number);
     printf("\nThe factorial is %ld",fact(number));
     return 0;
 }
