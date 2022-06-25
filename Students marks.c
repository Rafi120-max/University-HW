/* take input from user a marks and check the grade for this corresponnding mark*/
#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks\n");
	scanf("%d",&marks);
	if(marks>=80 && marks<=100)
	     printf("Grade: A+\n");
	     
	   else if(marks>100 && marks<0)
	     printf("Invalid input.\n");
	     
	   else if(marks>=70 && marks<=79)
	     printf("Grade:A\n");
	     
	   else if(marks<70 && marks>=40)
	     printf("Grade: B\n ");
	     
	   else
	    printf("failed!\n");
}

