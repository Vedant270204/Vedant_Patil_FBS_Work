//3. Find sum of all numbers.


#include <stdio.h>

int main(){
	
	
	int arr[4];
	int i,sum=0;
	
	printf("Enter the number : \n");
	for(int i=0;i<4;i++){
	
	   scanf("%d",&arr[i]);
	   sum=sum+arr[i];
}
      printf("%d",sum);

}