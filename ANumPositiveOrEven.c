/*A number is valid if its positive or even.Take input from user and check its validity.*/
#include<stdio.h>
int main(){
	int number;
	printf("Enter a number to check validity:");
    scanf("%d",&number);
    if(number>=0 || number%2==0)
    	printf("valid.\n");
	else
		printf("Invalid.\n");
	
	
}
