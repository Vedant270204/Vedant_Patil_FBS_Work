#include <stdio.h>
int main(){
	char str1[100],str2[100];
	int n;
	
	printf("enter a string :");
	scanf("%s",str1);
	printf("enter a character you want to copy : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		str2[i]=str1[i];

	str2[n]='\0';
	
	printf("Coied string :%s\n",str2);

}
