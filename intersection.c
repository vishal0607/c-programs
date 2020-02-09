#include <stdio.h>
#include <stdlib.h>
struct Array
{
	int A[20];
	int length;
	int size;
};
void display(struct Array arr)
{
	int i;
	printf("\nPrinting the elements\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
	printf("\n");
}
struct Array *Intersection(struct Array *a,struct Array *b)
{	
	struct Array *c;
	c=(struct Array*)malloc(sizeof(struct Array));
	int i,j,k,counter;
	i=j=k=counter=0;
	for(i=0;i<a->length;i++)
	{
		counter=0;
		for(j=0;j<b->length;j++)
		{
			if(a->A[i]==b->A[j])
			{
				counter++;
			}
		}
		if(counter==0)
		{
			c->A[k++]=a->A[i];
		}
	}
	c->length=k;
	c->size=20;
	return c;
}
int main()
{
	struct Array A={{3,5,10,4,6},5,20};
	struct Array B={{12,4,7,2,5},5,20};
	struct Array *C;
	C=Intersection(&A,&B);
	display(*C);
	
}
