// WAP for four arithmetic operations on two numbers sum, difference, product and quotient 

#include<stdio.h>
int main ()
{
	int num1 = 10, num2 = 20;
	int sum, diff, product;
	float quotient;
	
	//calculations
	sum = num1 + num2;
	diff = num1 - num2;
	product = num1 * num2;
	quotient = (float) num1 / num2;
	
	// display results
	printf("first number: %d\n", num1);
	printf("second number: %d\n", num2);
	printf("sum: %d\n", sum);
	printf("difference: %d\n", diff);
	printf("product: %d\n", product);
	printf("quotient: %.2f\n", quotient);
	
	return 0;
	
}
