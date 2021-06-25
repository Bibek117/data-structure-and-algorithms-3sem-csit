//multiplication of two natural numbers
#include<stdio.h>
int multiply(int a,int b)
{
    if(b==0)
    {
        return 0;
    }else{
        return (a+multiply(a,--b));
    }
}
int main()
{
    int num1,num2,mul;
    printf("Enter two natural numbers : \n");
    scanf("%d%d",&num1,&num2);
    mul = multiply(num1,num2);
    printf("\nThe result is : %d",mul);
    return 0;
}
