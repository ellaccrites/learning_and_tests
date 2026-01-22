#include <stdio.h>

void swap(int*, int*);

int main(){

	int x = 3;
	int y = 5;

	printf("x: %d  y: %d \n", x, y);
	printf("&x: %p  &y: %p \n", &x, &y);

	swap(&x, &y);
	printf("x: %d  y: %d \n", x, y);
	printf("&x: %p  &y: %p \n", &x, &y);
	return(0);
} // end main

void swap(int* pX, int* pY){
	printf("pX:  %p  pY: %p \n", pX, pY);

	int a = *pX;
	int b = *pY;

	*pY = a;
	*pX = b;

	printf("*pX: %d  *pY: %d \n", *pX, *pY);


} // end swap

