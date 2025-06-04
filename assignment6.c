#include<stdio.h>
int main(){
	float num, square,cube;
	
	printf("Enter a number:");
	scanf("%f", &num);
	
	square = num * num;
	cube = num * num * num;
	
	printf("square of %.2f is %.2f\n", num,square);
	printf("cube of %.2f is %.2f\n", num,cube);
	
	return 0;	
}