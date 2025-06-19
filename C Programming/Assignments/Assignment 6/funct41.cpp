#include<stdio.h>
int finddigit(int no,int dig);
int main()
{

int no=123456;
int dig=3;


 int res=finddigit(no, dig) ;
 
  if (res==1)
printf("digit found");

else
	printf("digit not found");

}


int finddigit(int no,int dig)
{
    int rem;
	while(no>0)
	{
		rem=no%10;
	
		if(rem==dig)
		return 1;
		
		no=no/10;
		}
		return 0;
	}

