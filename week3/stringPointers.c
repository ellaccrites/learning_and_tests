
// pointers with strings

#include <stdio.h>
#include <string.h>

// array is really a pointer to the zeroth element in the array
// string is really and array of characters

int main(){
	char fName[20] = "Ella";
	printf("Hiya %s! \n", fName);
	// can use pointer arithmatic with 'strings'
	
	// can use two variables in a printf command
	char lName[20] = "Crites";
	printf("Hello, %s %s! \n", fName, lName);
	
	// in order to put new characters in a string, must use strcpy()
	
	char strA[10] = "May";
	char strB[10] = "May";

	if (strA == strB){
		printf("They are the same. \n");
	} else {
		printf("They are not the same. \n");
	} // end if
	  // they will not be the same because their locations 
	  // are not and this is comparing locations
	
	if (strcmp(strA, strB) == 0){
		printf("They are the same. \n");
        } else {
                printf("They are not the same. \n");
        } // end if
	  //  will say true because strcmp compares the items 
	  //  in a string and returns a negative integer for false and a zero for true

	// other notes things -- for function calls
	// function prototypes are initializing functions before using 
	// main to call those functions if those functions are written after main
	

	// pointers in function calls
	// if value initialized in another function, pointers allow to change
	// the actual variable to change and not just it's value for the moment
	//
	// pass by value - transfers value of variable
	// pass by reference - passing pointer to  change the actual value in place
	
	float pi = 3.141592653589;

	printf("%f  %10.2f  %4.2f \n", pi, pi, pi);

	// for float length.number of signifigant figures
	// for string use %num total characters s, add negative for right justified
	
	// for scanf for user input, must pass a pointer to the function call
	// string is an array so it is already a pointer, bur for number input...
	// must pass a pointer... so &variable
	
	// to use inout with spaces -use fgets function like fgets(one, two, three)
	// use scanf to move values from array into other variables
	// for example: scanf(data, '%s  %s  %s', one, two, three);
	// if one of those is an integer use %d and &variable
	
	return(0);

} // end main
