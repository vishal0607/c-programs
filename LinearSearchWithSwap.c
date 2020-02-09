#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[20];
	int size;
	int length;
	
};
void append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=x;
	}
	arr->length++;
}
void display(struct Array arr)
{
	int i;
	printf("Size :%d\n",arr.size);
	printf("Length:%d\n",arr.length);
	for(i=0;i<arr.length;i++)
	{
		printf("A[%d] = %d \n",i,arr.A[i]);
	}
}
void Insert(struct Array *arr,int index, int x)
{
	int i;
	if(index>=0&&index<=arr->length)//if(index<arr->length&&arr->length<arr->size) this is wrong
	{
		for(i=arr->length;i>index;i--)
		{
			arr->A[i]=arr->A[i-1];
		}
		arr->A[index]=x;
		arr->length++;
	}
	else
	{
		printf("not possible\n");
	}
}
int delete(struct Array *arr, int index)
{
	int x=0;
	int i;
	if(index>=0&&index<arr->length)
	{
		x=arr->A[index];
			
		for(i=index;i<arr->length-1;i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	return x;
	
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int LinearSearch(struct Array *arr, int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			//using Transposition Method
			swap(&arr->A[i],&arr->A[i-1]);
			return i-1;
			//using Move to Forward or Head Method
			/*swap(&arr->A[i],&arr->A[0]);
			return 0;*/
		}
	}
	return -1;
}
int main()
{
	struct Array arr= {{2,4,5,6,7},10,5};
	append(&arr,8);
	display(arr);
	/*
	int index,x;
	printf("Enter the index :");
	scanf("%d",&index);
	printf("Enter the value :");
	scanf("%d",&x);
	Insert(&arr,index,x);
	display(arr);
	printf("Enter the index to delete:");
	scanf("%d",&x);
	printf("%d is deleted\n",delete(&arr,x));
	display(arr);*/
	
	int key;
	printf("Enter the value to search:");
	scanf("%d",&key);
	printf("%d",LinearSearch(&arr,key));
	printf("\n");
	display(arr);
}
