//reversing of an array
#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[10];
	int length;
	int size;
};
void reverse(struct Array *arr)
{
	int i,j;
	int B[arr->length];
	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		B[j]=arr->A[i];
	}
	for(i=0;i<arr->length;i++)
	{
		arr->A[i]=B[i];
	}
}
void reverseSwap(struct Array *arr)
{
	int i,j,temp;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		temp=arr->A[i];
		arr->A[i]=arr->A[j];
		arr->A[j]=temp;
	}
}
void leftShift(struct Array *arr)
{
	int i,temp;
	temp=arr->A[0];
	for(i=0;i<arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length-1]=temp;
}
void display(struct Array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int main()
{
	struct Array arr={{2,3,5,6,7},5,10};
	leftShift(&arr);
	display(arr);
}
