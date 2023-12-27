#include<stdio.h>

int main() {
	int a=0,b=1,c;
	int n;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	printf("fibonacci series of %d is :\n",n);
	
	printf("%d\t%d",a,b);
	
	for(int i=2;i<n;i++) {
	
		c = a+b;
		a = b; 
		b = c;
		printf("\t%d",c);
	}
	
}
