//5. Write a user define functions for ::mystrncpy

#include<stdio.h>
int main(){
  char	str1[50],str2[50];
  int i,n;
  printf("Enter a string :");
  scanf("%s",str1);
  
  printf("\nEnter a no of characters  :");
  scanf("%d",&n);
  
  for(i=0;i<n&&str1[i];i++)
  
  str2[i]=str1[i];
  str2[i]='\0';
  printf("1st %d characters :%s\n",n,str2);
}
