#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int *A;
	int size;
	int length;
};
int Insert(struct Array *arr,int val)
{
	if(arr->length==arr->size)
	{
		printf("The array is full");
		return;
	}
	arr->A[arr->length++]=val;
	
}
void Display(struct Array arr)
{
	int i;
	printf("\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
void Delete(struct Array *arr,int index)
{
	int i;
	if(index<0||index>arr->length)
	{
		printf("Index not valid");
		return 0;
	}
	for(i=index;i<arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->A[arr->length--]=0;
}
int LinearSearch(struct Array *arr,int val)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]==val)
		{
			return i;
		}
	}
	return -1;
}
int ImprovedLinearSearch(struct Array *arr,int val)
{
	int i,temp;
	for(i=0;i<arr->length;i++)
	{
		if(arr->A[i]==val)
		{
			temp=arr->A[0];
			arr->A[0]=arr->A[i];
			arr->A[i]=temp;
			return 0;
		}
	}
	return -1;
}
int Sort(struct Array *arr)
{
	int i,j;
	for(j=0;j<arr->length;j++)
	{
		for(i=arr->length-1;i>j;i--)
		{
			if(arr->A[i]<arr->A[i-1])
			{
				Swapp(&arr->A[i],&arr->A[i-1]);
			}
		}
	}
}
void Swapp(int *a,int *b)
{
	int *c;
	c=a;
	a=b;
	b=c;
}
int main()
{
	struct Array arr;
	arr.A=(int*)malloc(20*sizeof(int));
	arr.A[0]=5;arr.A[1]=4;arr.A[2]=3;
	arr.length=3;
	arr.size=20;
	Insert(&arr,2);
	Sort(&arr);
	Display(arr);
}
