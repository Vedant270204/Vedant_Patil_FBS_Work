#include<stdio.h>
void main()
{
	int row=10,col=10;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==1||i==10||j==1||j==10||i==j)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
}