#include <stdio.h>
double e(int x,int y)
{
	static double p=1,f=1;
	double r;
	if(y==0)
	{
		return 1;
	}
	else
	{
		return e(x,y-1)+((p*x)/(f*y));
	}
}
int main()
{
	double z=e(1,10);
	printf("%lf ",z);
}
