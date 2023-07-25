//Write a program in C to sum the digits of a given number using recursion
#include<stdio.h>
int sum_digits(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10)+sum_digits(n/10);
}
int main()
{
	printf("enter no:");
	int n;
	scanf("%d",&n);
	int res=sum_digits(n);
	printf("SUM OF DIGITS=%d",res);
}
