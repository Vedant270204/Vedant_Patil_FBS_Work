#include<stdio.h>
void evenodd(); //dec
int main()
{
	evenodd();
}
	void evenodd()//def
	{
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if(number%2==0)
		printf("%d is even\n",number);
	else
		printf("%d number is odd\n",number);
}