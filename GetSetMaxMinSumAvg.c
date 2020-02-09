#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[10];
	int length;
	int size;
};
int Get(struct Array arr,int index)
{
	if(index>=0&&index<arr.length)
		return arr.A[index];
	return -1;
}
void Set(struct Array *arr,int index,int val)
{
	if(index>=0&&index<=arr->length)
		arr->A[index]=val;
}
int Max(struct Array arr)
{
	int m=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]>m)
			m=arr.A[i];
	}
	return m;
}
int Min(struct Array arr)
{
	int m=arr.A[0];
	int i;
	for(i=1;i<arr.length;i++)
	{
		if(arr.A[i]<m)
			m=arr.A[i];
	}
	return m;
}
int Sum(struct Array arr)
{
	int s=0;
	int i;
	for(i=0;i<arr.length;i++)
	{
		s+=arr.A[i];
	}
	return s;
}
/*float avg(struct Array arr)
{
	int total=0;
	int i;
	for(i=0;i<arr.length;i++)
	{
		total=total+arr.A[i];
	}
	return (total/arr.length);
}*/
float Avg(struct Array arr)
{
	return (float) Sum(arr)/arr.length;
}
void display(struct Array arr)
{
	int i;
	printf("\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int main()
{
	struct Array arr={{4,5,15,37,8},5,10};
	printf("%f\n",Avg(arr));
	display(arr);
}
