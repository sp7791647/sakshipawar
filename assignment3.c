#include<stdio.h>

int main(){
	float celsius, fahrenheit;
	
	printf("Enter temperature in celsius:");
	scanf("%f",&celsius);
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.2f celsius is equal to %.2f fahrenheit\n", celsius, fahrenheit );
	
	return 0;
}