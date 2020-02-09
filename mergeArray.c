#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int *A;
	int size;
	int length;
};
void Merge(struct Array *arr1,struct Array *arr2,struct Array *arr3)
{
	printf("inside merge\n");
	int len=arr1->length+arr2->length;
	arr3->A=(int*)malloc(len*sizeof(int));
	arr3->length=len;
	arr3->size=len;
	int i=0;
	int j=0;
	int k=0;
	int m=arr1->length;
	int n=arr2->length;
	while(i<m&&j<n)
	{
		if(arr1->A[i]>arr2->A[j])
			arr3->A[k++]=arr2->A[j++];
		else
			arr3->A[k++]=arr1->A[i++];
	}	
	for(;i<m;i++)
	{
		arr3->A[k++]=arr1->A[i];
	}
	for(;j<n;j++)
	{
		arr3->A[k++]=arr2->A[j];
	}
}
void display(struct Array arr)
{
	printf("\n");
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}
int main()
{
	struct Array arr1;
	struct Array arr2;
	arr1.A=(int*)malloc(5*sizeof(int));
	arr1.length=5;
	arr1.size=5;
	arr2.A=(int*)malloc(5*sizeof(int));
	arr2.length=5;
	arr2.size=5;
	int i;int j;
	for(i=2,j=0;i<=10,j<5;i+=2,j++)
	{
		arr1.A[j]=i;
	}
	for(i=1,j=0;i<10,j<5;i+=2,j++)
	{
		arr2.A[j]=i;
	}
	struct Array arr3;
	Merge(&arr1,&arr2,&arr3);
	//display(arr1);
	display(arr3);
}
