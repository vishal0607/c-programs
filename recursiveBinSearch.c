#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int length;
};
int RBinSearch(int a[],int key,int l,int h)
{
	int mid=(l+h)/2;
	if(l<=h)
	{
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			return RBinSearch(a,key,l,mid-1);
		}
		else
		{
			return RBinSearch(a,key,mid+1,h);
		}
	}
	else
		return -1;
}
int main()
{
	struct Array arr={{2,3,4,5,6},10,5};
	printf("%d",RBinSearch(arr.A,6,0,arr.length));
}//therefore the code is working perfectly
