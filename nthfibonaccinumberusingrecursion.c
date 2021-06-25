#include<stdio.h>
int fibo(int n)
	{
	if(n<=1)
		return n;
	else
		return (fibo(n-1)+fibo(n-2));
	}

			void main()
			{
			int pos;
			int x;
			printf("Enter the position of the nth Fibonacci number:");
			scanf("%d", &pos);
			x=fibo(pos);
			printf("\n The %dth Fibonacci number is:%d", pos, x);
			}

