#include<stdio.h>

int main(){
	int a,b, temp;
	
	printf("Enter the first number (a)");
	scanf("%d",&a);
	
	printf("Enter the second number (b)");
	scanf("%d",&b);
	
	printf("\nBefore swapping: a = %d, b = %d\n", a, b);
	
	temp=a;
	a = b;
	b = temp;
	
	printf("After swapping: a = %d, b = %d\n",a ,b);
	
	return 0;
	
	
}