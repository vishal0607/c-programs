#include <stdio.h>
#include <stdlib.h>
struct Array 
{
	int A[10];
	int length;
	int size;
};
void display(struct Array arr)
{
	int i;
	printf("\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}
struct Array* Merge(struct Array *A,struct Array *B)
{
	struct Array *C=(struct Array*)malloc(sizeof(struct Array));//through this array is created in heap
	int i,j,k;
	i=j=k=0;
	int m=A->length;
	int n=B->length;
	while(i<m&&j<n)
	{
		if(A->A[i]<B->A[j])
			C->A[k++]=A->A[i++];
		else
			C->A[k++]=B->A[j++];
	}
	for(;i<m;i++)
		C->A[k++]=A->A[i];
	for(;j<n;j++)
		C->A[k++]=B->A[j];
	C->length=A->length+B->length;
	C->size=10;
	return C;
}
int main()
{
	struct Array arr1={{1,3,5,7,9},5,10};
	struct Array arr2={{6,8,10},3,10};
	struct Array *arr3;
	arr3=Merge(&arr1,&arr2);
	display(*arr3);
}
