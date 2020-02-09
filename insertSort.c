#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[20];
	int length;
	int size;
};
void insertSort(struct Array *arr,int val)
{
	int i=arr->length-1;
	if(arr->length>arr->size)
	{
		return;
	}
	while(arr->A[i]>val)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=val;
	arr->length++;
	
}
void display(struct Array arr)
{
	int i;
	printf("\nElements are :\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int isSorted(struct Array arr)
{
	int i;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		{
			//printf("%d,%d",arr.A[i],arr.A[i+1]);
			return 0;
		}
	}
	return 1;
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Rearrange(struct Array *arr)
{
	int i=0;
	int j=arr->length-1;
	while(i<j)
	{
		while(arr->A[i]<0){i++;}
		while(arr->A[j]>=0){j--;}
		if(i<j){swap(&arr->A[i],&arr->A[j]);}
	}
}
int main()
{
	struct Array arr={{2,-3,25,10,-15,7},6,20};
	//insertSort(&arr,3);
	Rearrange(&arr);
	display(arr);
	//printf("%d",isSorted(arr));
}	
