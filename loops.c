#include <stdio.h>
#include <string.h>

int main(){
	int i = 1;
	for (i = 1; i < 10; i++){
		printf("%d ", i);
	} // end for loop
	return(0);

	char response[10];
	strcpy(response, "no");

	while(strcmp(response, "yes") != 0){
		printf("Are we there yet? ");
		scanf("%s", response);
	} // end while
	printf("Can we go now? \n");

	return(0);

} // end main

