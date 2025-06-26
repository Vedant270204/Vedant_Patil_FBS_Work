//10. Write a user define functions for ::mystrstr
#include <stdio.h>
int main() {
   char str1[50],str2[50];
   printf("enter a string 1 :");
   scanf("%s",str1);
   
   printf("enter a string 2 :");
   scanf("%s",str2);
    int i, j;
    for (i=0;str1[i];i++) {
        for (j = 0;str2[j] && str1[i+j]==str2[j];j++);
        if (str2[j]=='\0') {
            printf("Substring found at: %s\n",str1+i);
          
        }
    }
    printf("Substring not found\n");
    return 0;
}
