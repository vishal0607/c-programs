#include <stdio.h>
#include <conio.h>
int main()
{
int i,a,b;
printf("Enter the 1st no.");
scanf("%d",&a);
printf("Enter the second no. ");
scanf("%d",&b);
i=(a>b)?a:b;
printf("%d",i);
return 0;
}
