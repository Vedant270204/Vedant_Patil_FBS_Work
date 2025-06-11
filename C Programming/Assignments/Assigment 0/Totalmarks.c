//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage

#include<stdio.h>
int main(){
	int maths=100;
	int phy=89;
	int chem=93;
	int bio=82;
	int eng=96;
	
	int totalmarks= maths+phy+chem+bio+eng;
	
	int percent =((float)totalmarks/500)*100;
	
	printf("Marks in subjects\n");
	
	printf("Maths %d\n",maths);
	printf("phy%d\n",phy);
	printf("chem %d\n",chem);
	printf("bio %d\n",bio);
	printf("eng %d\n",eng);
	
	printf("Total marks obtain =%d\n",totalmarks);
	
	printf("percentage=%d ",percent);
	
	return 0;
}