#include <stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
	//factorial is not possible for negative integers
}
int Ifact(int n)//iterative factorial
{
	int f=1;
	int i;
	for(i=1;i<=n;i++)
	{
		f=i*f;
	}
	return f;
}
int main()
{
	int r;
	r=Ifact(5);
	printf("%d ", r);	
}
