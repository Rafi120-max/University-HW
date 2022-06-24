#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3){
		printf("%d is the biggest number.",n1);
	}else{
		if(n2>=n3){
			printf("%d is the biggest number.",n2);
		}else{
			printf("%d is the biggest number.",n3);
		}
	}

	
}
