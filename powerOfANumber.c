#include <stdio.h>
int power1(int m,int n)//iterative recursive function	
{
	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	{
		return power1(m*m,(n/2));
	}
	else
	{
		return m * power1(m*m,((n-1)/2));
	}
}
int power(int m,int n)//recursive function
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return power(m,n-1)*m;
	}
}
int main()
{
	int r=power1(2,9);
	printf("%d ",r);
}
