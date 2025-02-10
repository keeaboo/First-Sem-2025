#include <stdio.h>

int main(){
	char username[80];
	int n;
	
	printf("Please enter your name: \n");
	scanf("%s", &username);
	printf("Please enter a number: \n");
	scanf("%d", &n);
	
	if (n%2 == 1)
		printf("Your number is odd \n");
	else
		printf("Your number is even \n");
		
		
	
	printf("Thank you");
	
	return 0;
	
}