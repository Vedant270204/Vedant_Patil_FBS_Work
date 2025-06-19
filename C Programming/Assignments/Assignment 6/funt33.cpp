//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively

#include <stdio.h>
void tsalary(int sal);
int main(){
	
	int basicsalary=7000;

	  
	  tsalary(basicsalary);
	  
}
	void tsalary(int sal){
	int da,ta,hra,totalsalary;
	if(sal<=5000){
		da=0.1*sal;
		ta=0.2*sal;
		hra=0.25*sal;
		
		totalsalary=sal+da+ta+hra;
		
		printf("Basic Salary is : %d\n",sal);
		printf("Da is : %d\n",da);
		printf("Ta is : %d\n",ta);
		printf("hra is : %d\n",hra);
		printf("Total Salary is : %d\n",sal);		
	}
	else{
		da=0.15*sal;
		ta=0.25*sal;
		hra=0.3*sal;
		
		totalsalary=sal+da+ta+hra;
		
		printf("Basic Salary is : %d\n",sal);
		printf("Da is : %d\n",da);
		printf("Ta is : %d\n",ta);
		printf("hra is : %d\n",hra);
		printf("Total Salary is : %d\n",totalsalary);	
	}
}
