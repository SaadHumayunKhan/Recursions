//Write a program in C to find GCD of two numbers using recursion
#include<stdio.h>
int gcd(int n1, int n2)
{
	if(n2==0)
	return n1;
	else
	return gcd(n2,n1%n2);
}
main()
{
	printf("enter two no:\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int res=gcd(n1,n2);
	printf("GCD=%d",res);
}

