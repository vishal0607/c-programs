#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int *A;
	int size;
	int length;
};
int display(struct Array arr)
{
	int i;
	printf("\nsize is : %d",arr.size);
	printf("\nlength is : %d",arr.length);
	printf("\nElements are :\n");
	for(i=0;i<arr.size;i++)
	{
		printf("%d\n",arr.A[i]);
	}
	
}
int main()
{
	int i;
	struct Array arr;
	printf("Enter the size of the array :");
	scanf("%d",&arr.size);
	printf("Enter the length of the array :");
	scanf("%d",&arr.length);
	arr.A=(int*)malloc(arr.size*sizeof(int));
	printf("Enter the values of the array \n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	display(arr);
}
