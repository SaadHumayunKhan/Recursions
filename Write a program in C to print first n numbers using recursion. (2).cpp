//1.Write a program in C to print first n numbers using recursion.
#include<stdio.h>
int fxn(int n)
{
	if(n>=1)
	fxn(n-1);
	printf("%d ",n);
}
int main()
{
	printf("enter limit:");
	int n;
	scanf("%d",&n);
	fxn(n);
	printf("end");
}
