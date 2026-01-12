#include <stdio.h>

// remember that you have to define the type of a function or variable
// use camelCasing as good practice for naming

// a long is int with twice and much space

int main(){
	int myInteger = 2;
	float myFloat = 3;

	printf("myInteger: %d \n", myInteger);
	printf("make float an int: %d \n", (int) 3.14159);
	printf("adding values: %d \n", myInteger + (int)myFloat);

	int myIntArray[10];
	// int is four bytes each. if you forget, use sizeof(VARIABLE)
	
	char text[10];
	// char is one byte each, so this is ten characters
	
	printf("text: |%s| \n", text);
	printf("size of text: %d bytes \n", (int)sizeof(text));
	return(0);
}
