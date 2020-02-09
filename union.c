#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[20];
	int length;
	int size;
};
void insert(struct Array *c,int val)
{
	int i;
	if(c->length==0)
	{
		c->A[0]=val;
		c->length++;
		return;
	}
	for(i=0;i<c->length;i++)
	{
		if(val==c->A[i])
		{
			return;
		}
	}
	c->A[c->length]=val;
	c->length++;
}

struct Array* arr3(struct Array *a1,struct Array *a2)
{
	struct Array *c=(struct Array*)malloc(sizeof(struct Array));
	c->length=0;
	c->size=20;
	int i,j;
	i=j=0;
	while(i<a1->length&&j<a2->length)
	{
		insert(c,a1->A[i++]);
		insert(c,a2->A[j++]);
	}
	for(;i<a1->length;i++)
	{
		insert(c,a1->A[i]);
	}
	for(;j<a2->length;j++)
	{
		insert(c,a2->A[j]);
	}
	return c;
}
struct Array* arr4(struct Array *a1,struct Array *a2)//for Sorted Arrays
{
	struct Array *c=(struct Array*)malloc(sizeof(struct Array));
	c->length=0;
	c->size=20;
	int i,j;
	i=j=0;
	while(i<a1->length&&j<a2->length)
	{
		if(a1->A[i]==a2->A[j])
		{
			c->A[c->length++]=a1->A[i];
			i++;
			j++;
		}
		else
		{
			c->A[c->length++]=a1->A[i++];
			c->A[c->length++]=a2->A[j++];
		}
	}
	for(;i<a1->length;i++)
	{
		c->A[c->length++]=a1->A[i];
	}
	for(;j<a2->length;j++)
	{
		c->A[c->length++]=a1->A[j];
	}
	return c;
}

display(struct Array arr)
{
	printf("display");
	int i;
	printf("printing the elements\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}
int main()
{
	struct Array a1={{3,4,5,6,10},5,20};
	struct Array a2={{2,3,4,5,7,12},5,20};
	struct Array *a3;
	a3=arr4(&a1,&a2);
	display(*a3);
	
}
