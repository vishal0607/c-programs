#include <stdio.h>
int sum(int n)//recursive function
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return sum(n-1)+n;
	}

}
int Isum(int n)//iterative function
{
	int s=0;
	int i;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
int main()
{
	int r;
	r=sum(5);
	printf("recursive function ans= %d ",r);
	r=Isum(5);
	printf("\niterative function ans= %d ",r);		
}
