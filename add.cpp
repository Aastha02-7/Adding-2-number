#include<stdio.h>
#include<conio.h>
void add(int a, int b)
{
	int sum;
	sum=a+b;
	printf("Sum of %d and %d is %d",a,b,sum);
}
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	add(x,y);
	return 0;
}
