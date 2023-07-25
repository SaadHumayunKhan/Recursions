//Write a program to convert decimal to binary using recursion
#include<stdio.h>
void dec_to_bin(int n)
{
	if(n>0)
	{
	dec_to_bin(n/2);
	printf("%d",n%2);
    }
}
 main()
{
	printf("enter decimal no:");
	int n;
	scanf("%d",&n);
	dec_to_bin(n);
	
}
