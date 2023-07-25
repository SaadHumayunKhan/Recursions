//2.Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
int fxn(int n)
{
	if(n>=1)
	return n+fxn(n-1);
}
int main()
{
	printf("enter limit:");
	int n;
	scanf("%d",&n);
	int sum=fxn(n);
	printf("SUM=%d",sum);
	
}
