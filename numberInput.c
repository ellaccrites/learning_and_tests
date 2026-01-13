#include <stdio.h>

int main(){
	int a, b;
	printf("Enter a number:  ");
	scanf("%d", &a);

	printf("Enter another number:  ");
	scanf("%d", &b);

	int sum = a + b;
	printf("%d + %d = %d  \n", a, b, sum);

	/*
	int divided by int gives int
	int quotient = a / b;
	printf("%d / %d = %d", a, b, quotient);
	*/

	float fa = (float)a;
	float fb = (float)b;
	float fq = fa / fb;
	printf("%f / %f = %f \n", fa, fb, fq);

	return(0);

} // end main
