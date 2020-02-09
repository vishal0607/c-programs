#include <stdio.h>
int c(int n,int r)
{
	if(n==r||r==0)
		return 1;
	return c(n-1,r-1)+c(n-1,r);
}
int main()
{
	int k=c(4,2);
	printf("%d ",k);
}
