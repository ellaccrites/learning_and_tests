#include <stdio.h>
#include <string.h>

int main(){
	char userName[20];
	printf("What is your name?  ");
	scanf("%s", userName);
	printf("Hello, %s! \n",userName);

	char correct[20];
	strcpy(correct, "Ella");

	if (strcmp(userName, correct) == 0){
		printf("Hey.... That's my name. \n");
	} else {
		printf("Just so you know... your name is boring. \n");
	} // end if
	
	return(0);
} // end main
 
