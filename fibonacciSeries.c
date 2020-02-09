#include <stdio.h>
int fib(int n)//iterative function
{
	int t0=0,t1=1,s,i;
	if(n<=1)
	{
		return n;
	}
	for(i=2;i<=n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
int rfib(int n)//recursive function
{
	if(n<=1)
		return n;
	else
		return rfib(n-2)+rfib(n-1);
}
int f[10];
int mfib(int n)//memorization function
{
	if(n<=1)
	{
		f[n]=n;
		return n;
	}
	else
	{
		if(f[n-2]==-1)
			f[n-2]=mfib(n-2);
		if(f[n-1]==-1)
			f[n-1]=mfib(n-1);
		
		f[n]=f[n-1]+f[n-2];
		return f[n-1]+f[n-2];
		
	}
}
int main()
{
	int i;
	for(i=0;i<10;i++)
		f[i]=-1;
	printf("%d ",mfib(6));
}
