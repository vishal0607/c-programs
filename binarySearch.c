#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[20];
	int size;
	int length;
	
};
/*void append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=x;
	}
	arr->length++;
}*/
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
/*void Insert(struct Array *arr,int index, int x)
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
}*/
int BinSearch(struct Array *arr,int l,int h,int s)
{
	int mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(s==arr->A[mid])
		{
			return mid;
		}
		else if(s<arr->A[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}
int main()
{
	struct Array arr= {{2,4,5,6,7},10,5};
	//append(&arr,8);
	display(arr);
	int x;
	/*
	int index,x;
	printf("Enter the index :");
	scanf("%d",&index);
	printf("Enter the value :");
	scanf("%d",&x);
	Insert(&arr,index,x);*/
	display(arr);
	printf("Enter the value to search:");
	scanf("%d",&x);
	printf("%d",BinSearch(&arr,0,arr.length,x));
}
