#include<stdio.h>
int main(){
int start=5,end=15,sum=0;
for(int i=start;i<=end;i++)	{
sum=sum+=1;
}
printf("sum of numbers %d to %d:%d/n =",start,end,sum);
return 0;
}