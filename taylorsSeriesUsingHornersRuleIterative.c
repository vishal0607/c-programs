#include <stdio.h>
double e(int x,int n)
{
	double s=1.0;
	for(;n>0;n--)
	{
		s=1+x*s/n;
	}
	return s;
}
int main()
{
	double z=e(1,10);
	printf("%lf ",z);
}
