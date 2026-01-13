#include <stdio.h>
#include <string.h>

int main(){
        char response[10];
        strcpy(response, "no");

	/*
	kinda bad way to code this -->

        while(strcmp(response, "yes") != 0){
                printf("Are we there yet? ");
                scanf("%s", response);
        } // end while
        printf("Can we go now? \n");
        return(0);
	*/

	int keepGoing = 1;
	while(keepGoing){
		printf("Are we there yet? ");
		scanf("%s", response);
		if (strcmp(response, "yes") == 0){
			keepGoing = 0;
		} // end if
	} // end while
	printf("...  \n");
	printf("Can we go home now?  \n");

} // end main
