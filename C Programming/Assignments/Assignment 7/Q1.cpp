//1. Find minimum and maximum number in array.



#include<stdio.h>

int main(){

int arr[10];

   printf("Enter the Elements of arr : \n");
   for(int i=0;i<10;i++){
   	scanf("%d ",&arr[i]);
   }
   printf("Elements of array\n");
     for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
	 }
	 
	int maximum=arr[0];
	int minimum=arr[0];
	  for (int i=0;i<10;i++)  
	  {
	  	if(maximum<arr[i])
	  	maximum=arr[i];
	  	
	  	if(minimum>arr[i])
	  	minimum=arr[i];
	  }
	  printf("\nMaximum %d ",maximum);
		printf("Minimum %d ",minimum);
}