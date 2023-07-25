//3.Write a program to find the factorial of a number.
#include<stdio.h>
int cal_fact(int n)
{
	if(n>1)
	return n*cal_fact(n-1);
}
int main()
{
	printf("enter limit:");
	int n;
	scanf("%d",&n);
	int fact=cal_fact(n);
	printf("factorial=%d",fact);
}
