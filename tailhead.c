//tail head recurssion
#include <stdio.h>
void fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);//tail position print
		fun(n-1);
		//head position print
		
	}
}
int main()
{
	int x=3;
	fun(x);
}
