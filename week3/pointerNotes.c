// pointer and array notes and example code
//

#include <stdio.h>
#define SIZE 3

// value, address of a value are different
// value of pvalue is the address of pa

int main(){
	// Pointers
	int a = 5;
	printf("value of a: %d \n", a);
	printf("addres of a: %p \n", &a);

	// * is a pointer, means 'value at'
	
	int *pA = &a; // holds adress of a
	printf("value of where pA points: %d \n", *pA);
	printf("address of pA: %p \n", &pA);
	// can have a pointer to a pointer
	
	int ** ppA = &pA; //stores adress of a ppinter, an address of an address
	

	// Arrays
	// using #define to create a kinda constant, shown above
	// have to know size of array - set space or give preloaded array
	
	int score[] = {1, 4, 6};

	// use for loop to move throught arrays 
	int i = 0;
	for (i = 0; i < SIZE; i++){
		printf("%d) %d \n", i, score[i]);
	} // end for
	
	int par[SIZE];
	par[0] = 3;
	par[1] = 4;
	par[2] = 2;

	// array is actually a pointer to element zero
	printf("score for 0: %d \n", *score);
	printf("score: %p \n", score);
	
	//will print location of 5 things ahead which is par[two]
	printf("score + 5: %p \n", score + 5);

	// can print out values not in array
	printf("tricky creepy move: %d \n", *(score + 5)); // will print out value at par[two]
	printf("address of par[2] = 2: %p \n", &par[2]);

} // end main
