#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int *A;
	int size;
	int length;
}arr;
void add(int x)
{
	arr.A[arr.length]=x;
	arr.length++;
}
void display(struct Array arrr)
{
	int i;
	printf("\nSize is :%d",arrr.size);
	printf("\nLength is :%d",arrr.length);
	printf("\nThe elements are :\n");
	for(i=0;i<arrr.length;i++)
	{
		printf("%d\n",arrr.A[i]);
	}
}
int main()
{
	int i,inp;
	printf("Enter the Size of the array:");
	scanf("%d",&arr.size);
	arr.A=(int*)malloc(sizeof(int));
	printf("Enter the Length of the array:");
	scanf("%d",&arr.length);
	printf("Enter the elements of the array:\n");
	for(i=0;i<arr.length;i++)
	{
		scanf("%d",&arr.A[i]);
	}
	display(arr);
	printf("Enter the no. to add it in the array:");
	scanf("%d",&inp);
	add(inp);
	display(arr);
}
